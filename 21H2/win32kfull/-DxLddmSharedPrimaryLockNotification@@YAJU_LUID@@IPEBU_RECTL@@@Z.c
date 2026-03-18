/*
 * XREFs of ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0273714
 * Callers:
 *     NtGdiDdDDISharedPrimaryLockNotification @ 0x1C0275840 (NtGdiDdDDISharedPrimaryLockNotification.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C011778C (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C02741B4 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027EEA4 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 */

__int64 __fastcall DxLddmSharedPrimaryLockNotification(struct _LUID a1, int a2, const struct _RECTL *a3)
{
  DWORD LowPart; // ebx
  unsigned int v4; // edi
  int v5; // r12d
  int v7; // r14d
  HDEV i; // rcx
  int v9; // eax
  struct _LUID *v10; // rax
  HDEV v11; // r14
  unsigned __int64 v12; // r13
  LONG top; // ecx
  LONG right; // r9d
  struct tagSIZE v15; // rax
  int v16; // r9d
  struct tagSIZE v17; // rax
  int v18; // r10d
  __int64 ProcessEntry; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  struct _RECTL *v23; // r9
  LONG v24; // eax
  LONG v25; // eax
  LONG bottom; // eax
  HDEV v27; // rax
  HDEV v28; // r15
  HDEV v30; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v31[4]; // [rsp+28h] [rbp-48h] BYREF
  int v32; // [rsp+2Ch] [rbp-44h]
  struct _LUID v33; // [rsp+30h] [rbp-40h]
  __int128 v34; // [rsp+58h] [rbp-18h] BYREF

  LowPart = a1.LowPart;
  v33 = a1;
  v4 = 0;
  v32 = a2;
  v5 = 0;
  v7 = a2;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v31);
  if ( !g_pDwmState )
  {
    for ( i = 0LL; ; i = v28 )
    {
      v27 = (HDEV)hdevEnumerate(i);
      v28 = v27;
      if ( !v27 )
      {
        v4 = v5;
        goto LABEL_44;
      }
      v30 = v27;
      v9 = *((_DWORD *)v27 + 10);
      if ( (v9 & 0x400) == 0 && (v9 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v30) )
        {
          if ( LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v30)->LowPart )
          {
            v10 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v30);
            if ( v33.HighPart == v10->HighPart && *(_DWORD *)(*((_QWORD *)v30 + 319) + 256LL) == v7 )
              break;
          }
        }
      }
LABEL_41:
      ;
    }
    GreLockVisRgn(v30);
    GreLockSprite(v30);
    GreLockDisplayDevice(v30);
    v11 = v30 + 650;
    v12 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
    v34 = 0LL;
    top = a3->top;
    if ( top || a3->left || a3->right || a3->bottom )
    {
      right = a3->right;
      if ( right <= a3->left
        || a3->bottom <= top
        || a3->left < 0
        || right < 0
        || (v15 = PDEVOBJ::sizl((PDEVOBJ *)&v30), v16 > *(_DWORD *)v15.cx)
        || (v17 = PDEVOBJ::sizl((PDEVOBJ *)&v30), v18 > *(_DWORD *)(*(_QWORD *)&v17 + 4LL)) )
      {
        v5 = -1073741811;
        goto LABEL_40;
      }
    }
    else
    {
      DWORD2(v34) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v30).cx;
      a3 = (const struct _RECTL *)&v34;
      HIDWORD(v34) = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v30) + 4LL);
    }
    if ( v5 >= 0 )
    {
      ProcessEntry = DxLddmFindProcessEntry(v11, (unsigned int)v12);
      if ( ProcessEntry )
      {
LABEL_25:
        ++*(_DWORD *)(ProcessEntry + 20);
        ++*((_DWORD *)v30 + 654);
        v22 = *(_DWORD *)(ProcessEntry + 24);
        if ( v22 != -1 )
          *(_DWORD *)(ProcessEntry + 24) = v22 + 1;
        v23 = (struct _RECTL *)(ProcessEntry + 28);
        if ( *(_DWORD *)(ProcessEntry + 20) == 1 )
        {
          *v23 = *a3;
          *(_DWORD *)(ProcessEntry + 44) = giVisRgnUniqueness;
        }
        else
        {
          if ( a3->left < v23->left )
            v23->left = a3->left;
          v24 = a3->top;
          if ( v24 < *(_DWORD *)(ProcessEntry + 32) )
            *(_DWORD *)(ProcessEntry + 32) = v24;
          v25 = a3->right;
          if ( v25 > *(_DWORD *)(ProcessEntry + 36) )
            *(_DWORD *)(ProcessEntry + 36) = v25;
          bottom = a3->bottom;
          if ( bottom > *(_DWORD *)(ProcessEntry + 40) )
            *(_DWORD *)(ProcessEntry + 40) = bottom;
        }
        bSpTearDownSprites(v30, (struct _RECTL *)(ProcessEntry + 28), 1);
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v30,
          (struct _SURFOBJ *)((*((_QWORD *)v30 + 316) + 24LL) & -(__int64)(*((_QWORD *)v30 + 316) != 0LL)),
          0LL,
          6u);
        goto LABEL_40;
      }
      v20 = Win32AllocPoolZInit(48LL, 1684305988LL);
      ProcessEntry = v20;
      if ( v20 )
      {
        *(_DWORD *)(v20 + 16) = v12;
        v21 = *(_QWORD *)v11;
        if ( *(HDEV *)(*(_QWORD *)v11 + 8LL) != v11 )
          __fastfail(3u);
        *(_QWORD *)ProcessEntry = v21;
        *(_QWORD *)(ProcessEntry + 8) = v11;
        *(_QWORD *)(v21 + 8) = ProcessEntry;
        *(_QWORD *)v11 = ProcessEntry;
        goto LABEL_25;
      }
      v5 = -1073741801;
    }
LABEL_40:
    GreUnlockDisplayDevice(v30);
    GreUnlockSprite(v30);
    GreUnlockVisRgn(v30);
    v7 = v32;
    goto LABEL_41;
  }
LABEL_44:
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v31);
  return v4;
}
