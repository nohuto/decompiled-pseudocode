/*
 * XREFs of ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0271100
 * Callers:
 *     NtGdiDdDDISharedPrimaryLockNotification @ 0x1C0272B00 (NtGdiDdDDISharedPrimaryLockNotification.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C001F5A0 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0271BE4 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C02810C0 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 */

__int64 __fastcall DxLddmSharedPrimaryLockNotification(struct _LUID a1, int a2, const struct _RECTL *a3)
{
  DWORD LowPart; // ebx
  int v5; // edi
  int v6; // r12d
  Gre::Base *v7; // rcx
  HDEV i; // rcx
  struct _LUID *v10; // rax
  HDEV v11; // r15
  unsigned __int64 v12; // r13
  LONG top; // ecx
  LONG right; // r9d
  struct tagSIZE v15; // rax
  int v16; // r9d
  struct tagSIZE v17; // rax
  int v18; // r10d
  Gre::Base *v19; // rcx
  __int64 ProcessEntry; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  struct _RECTL *v24; // r15
  LONG v25; // eax
  LONG v26; // eax
  LONG bottom; // eax
  HDEV v28; // rax
  HDEV v29; // r14
  char v30[8]; // [rsp+20h] [rbp-60h] BYREF
  HDEV v31; // [rsp+28h] [rbp-58h] BYREF
  int v32; // [rsp+30h] [rbp-50h]
  struct _LUID v33; // [rsp+38h] [rbp-48h]
  __int128 v34; // [rsp+60h] [rbp-20h] BYREF

  LowPart = a1.LowPart;
  v33 = a1;
  v32 = a2;
  v5 = a2;
  v6 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v30);
  if ( IsDwmActive(v7) )
  {
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v30);
    return 0LL;
  }
  for ( i = 0LL; ; i = v29 )
  {
    v28 = (HDEV)hdevEnumerateDisplayOnly(i);
    v29 = v28;
    if ( !v28 )
      break;
    v31 = v28;
    if ( ((_DWORD)v28[10] & 0x20400) == 0 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v31) )
      {
        if ( LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v31)->LowPart )
        {
          v10 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v31);
          if ( v33.HighPart == v10->HighPart && *(_DWORD *)(*((_QWORD *)v31 + 319) + 248LL) == v5 )
          {
            GreLockVisRgn(v31);
            GreLockSprite(v31);
            GreLockDisplayDevice(v31);
            v11 = v31 + 650;
            v12 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
            v34 = 0LL;
            top = a3->top;
            if ( !top && !a3->left && !a3->right && !a3->bottom )
            {
              DWORD2(v34) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v31).cx;
              a3 = (const struct _RECTL *)&v34;
              HIDWORD(v34) = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v31) + 4LL);
              goto LABEL_20;
            }
            right = a3->right;
            if ( right <= a3->left
              || a3->bottom <= top
              || a3->left < 0
              || right < 0
              || (v15 = PDEVOBJ::sizl((PDEVOBJ *)&v31), v16 > *(_DWORD *)v15.cx)
              || (v17 = PDEVOBJ::sizl((PDEVOBJ *)&v31), v18 > *(_DWORD *)(*(_QWORD *)&v17 + 4LL)) )
            {
              v6 = -1073741811;
            }
            else
            {
LABEL_20:
              if ( v6 >= 0 )
              {
                ProcessEntry = DxLddmFindProcessEntry(v11, (unsigned int)v12);
                if ( ProcessEntry )
                  goto LABEL_25;
                v21 = Win32AllocPoolZInit(48LL, 1684305988LL);
                ProcessEntry = v21;
                if ( v21 )
                {
                  *(_DWORD *)(v21 + 16) = v12;
                  v22 = *(_QWORD *)v11;
                  if ( *(HDEV *)(*(_QWORD *)v11 + 8LL) != v11 )
                    __fastfail(3u);
                  *(_QWORD *)ProcessEntry = v22;
                  *(_QWORD *)(ProcessEntry + 8) = v11;
                  *(_QWORD *)(v22 + 8) = ProcessEntry;
                  *(_QWORD *)v11 = ProcessEntry;
LABEL_25:
                  ++*(_DWORD *)(ProcessEntry + 20);
                  ++*((_DWORD *)v31 + 654);
                  v23 = *(_DWORD *)(ProcessEntry + 24);
                  if ( v23 != -1 )
                    *(_DWORD *)(ProcessEntry + 24) = v23 + 1;
                  v24 = (struct _RECTL *)(ProcessEntry + 28);
                  if ( *(_DWORD *)(ProcessEntry + 20) == 1 )
                  {
                    *v24 = *a3;
                    *(_DWORD *)(ProcessEntry + 44) = *((_DWORD *)Gre::Base::Globals(v19) + 1629);
                  }
                  else
                  {
                    if ( a3->left < v24->left )
                      v24->left = a3->left;
                    v25 = a3->top;
                    if ( v25 < *(_DWORD *)(ProcessEntry + 32) )
                      *(_DWORD *)(ProcessEntry + 32) = v25;
                    v26 = a3->right;
                    if ( v26 > *(_DWORD *)(ProcessEntry + 36) )
                      *(_DWORD *)(ProcessEntry + 36) = v26;
                    bottom = a3->bottom;
                    if ( bottom > *(_DWORD *)(ProcessEntry + 40) )
                      *(_DWORD *)(ProcessEntry + 40) = bottom;
                  }
                  bSpTearDownSprites(v31, (struct _RECTL *)(ProcessEntry + 28), 1);
                  PDEVOBJ::vSync(
                    (PDEVOBJ *)&v31,
                    (struct _SURFOBJ *)((*((_QWORD *)v31 + 316) + 24LL) & -(__int64)(*((_QWORD *)v31 + 316) != 0LL)),
                    0LL,
                    6u);
                }
                else
                {
                  v6 = -1073741801;
                }
                v5 = v32;
              }
            }
            GreUnlockDisplayDevice(v31);
            GreUnlockSprite(v31);
            GreUnlockVisRgn(v31);
            continue;
          }
        }
      }
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v30);
  return (unsigned int)v6;
}
