/*
 * XREFs of ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0273A8C
 * Callers:
 *     NtGdiDdDDISharedPrimaryUnLockNotification @ 0x1C02758D0 (NtGdiDdDDISharedPrimaryUnLockNotification.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C011778C (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     UserRedrawDesktop @ 0x1C0239BEC (UserRedrawDesktop.c)
 *     vSpUnTearDownSprites @ 0x1C0282B00 (vSpUnTearDownSprites.c)
 */

__int64 __fastcall DxLddmSharedPrimaryUnLockNotification(struct _LUID a1, int a2)
{
  DWORD LowPart; // ebx
  int v3; // edi
  unsigned int v4; // r14d
  int v5; // r15d
  __int64 i; // rsi
  int v7; // eax
  __int64 v8; // rdi
  unsigned int CurrentProcessId; // eax
  __int64 ProcessEntry; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  LONG HighPart; // [rsp+64h] [rbp+44h]
  __int64 v17; // [rsp+70h] [rbp+50h] BYREF

  HighPart = a1.HighPart;
  LowPart = a1.LowPart;
  v3 = a2;
  v4 = 0;
  v5 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
  for ( i = hdevEnumerate(0LL); i; i = hdevEnumerate(i) )
  {
    v17 = i;
    v7 = *(_DWORD *)(i + 40);
    if ( (v7 & 0x400) == 0
      && (v7 & 0x20000) == 0
      && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v17)
      && LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v17)->LowPart
      && HighPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v17)->HighPart
      && *(_DWORD *)(*(_QWORD *)(v17 + 2552) + 256LL) == v3 )
    {
      GreLockVisRgn(v17);
      GreLockSprite(v17);
      GreLockDisplayDevice(v17);
      v8 = v17;
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      ProcessEntry = DxLddmFindProcessEntry(v8 + 2600, CurrentProcessId & 0xFFFFFFFC);
      v11 = ProcessEntry;
      if ( ProcessEntry )
      {
        if ( *(_DWORD *)(ProcessEntry + 20) )
        {
          v12 = v17;
          if ( *(_QWORD *)(v17 + 2624) )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(v17 + 2624))(*(_QWORD *)(v17 + 1768), v11 + 28);
            v12 = v17;
          }
          --*(_DWORD *)(v12 + 2616);
          if ( (*(_DWORD *)(v11 + 20))-- == 1 )
          {
            vSpUnTearDownSprites(v17, v11 + 28, 1LL);
            if ( *(_DWORD *)(v11 + 44) != giVisRgnUniqueness )
              v5 = 1;
          }
        }
      }
      else
      {
        v4 = -1073741811;
      }
      GreUnlockDisplayDevice(v17);
      GreUnlockSprite(v17);
      GreUnlockVisRgn(v17);
      v3 = a2;
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
  if ( v5 )
    UserRedrawDesktop();
  return v4;
}
