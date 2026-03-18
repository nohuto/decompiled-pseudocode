/*
 * XREFs of GreSelectFont @ 0x1C00E8510
 * Callers:
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C015A5CC (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     MNAllocMenuState @ 0x1C021B978 (MNAllocMenuState.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C015D3B4 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 *     ??0?$HmgShareLockResult@VLFONT@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C015F29C (--0-$HmgShareLockResult@VLFONT@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VLFONT@@@@QEAA@XZ @ 0x1C015F2FC (--1-$HmgShareLockResult@VLFONT@@@@QEAA@XZ.c)
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C015F320 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
 */

__int64 __fastcall GreSelectFont(HDC a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 *v4; // rax
  int IsEnabled; // eax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  struct LFONT *v10; // rdi
  _QWORD v12[5]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v13[7]; // [rsp+48h] [rbp-38h] BYREF

  v3 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( v13[0] )
  {
    v4 = *(__int64 **)(v13[0] + 152LL);
    if ( v4 )
      v3 = *v4;
    if ( a2 != v3 )
    {
      IsEnabled = Feature_3101493560__private_IsEnabled();
      LOBYTE(v6) = 10;
      if ( !IsEnabled )
      {
        v9 = HmgShareLockCheck(a2, v6);
        v10 = (struct LFONT *)v9;
        if ( v9 )
        {
          if ( (*(_BYTE *)(HmgPentryFromPobj(v9) + 15) & 2) == 0 )
          {
            DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)(v13[0] + 152LL));
            *(_QWORD *)(v13[0] + 152LL) = v10;
            *(_QWORD *)(*(_QWORD *)(v13[0] + 976LL) + 296LL) = a2;
            *(_QWORD *)(v13[0] + 1744LL) = 0LL;
            *(_DWORD *)(*(_QWORD *)(v13[0] + 976LL) + 152LL) |= 0x10u;
            *(_DWORD *)(*(_QWORD *)(v13[0] + 976LL) + 152LL) &= ~0x20u;
            goto LABEL_16;
          }
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v10);
        }
        v3 = 0LL;
        goto LABEL_16;
      }
      v7 = HmgShareLockCheck(a2, v6);
      HmgShareLockResult<LFONT>::HmgShareLockResult<LFONT>(v12, v7);
      if ( !(unsigned __int8)HmgLockResultBase<META>::operator bool(v12)
        || (*(_BYTE *)(HmgPentryFromPobj(v12[0]) + 15) & 2) != 0 )
      {
        v3 = 0LL;
      }
      else
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)(v13[0] + 152LL));
        v8 = v12[0];
        v12[0] = 0LL;
        *(_QWORD *)(v13[0] + 152LL) = v8;
        *(_QWORD *)(*(_QWORD *)(v13[0] + 976LL) + 296LL) = a2;
        *(_QWORD *)(v13[0] + 1744LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(v13[0] + 976LL) + 152LL) |= 0x10u;
        *(_DWORD *)(*(_QWORD *)(v13[0] + 976LL) + 152LL) &= ~0x20u;
      }
      HmgShareLockResult<LFONT>::~HmgShareLockResult<LFONT>(v12);
    }
  }
LABEL_16:
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return v3;
}
