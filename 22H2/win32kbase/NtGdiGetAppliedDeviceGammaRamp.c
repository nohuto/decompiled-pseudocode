/*
 * XREFs of NtGdiGetAppliedDeviceGammaRamp @ 0x1C0148D20
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002C278 (PALLOCMEM2.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C003C3E8 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003C518 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003C8E8 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003C948 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     EngSetLastError @ 0x1C009F430 (EngSetLastError.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00A7360 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 *     ?GetAppliedGammaRampTable@PDEVOBJ@@QEAAPEAXXZ @ 0x1C014888C (-GetAppliedGammaRampTable@PDEVOBJ@@QEAAPEAXXZ.c)
 */

__int64 __fastcall NtGdiGetAppliedDeviceGammaRamp(HDC a1, _BYTE *a2)
{
  unsigned int v4; // edi
  ULONG v5; // ecx
  _WORD *v7; // rbx
  int v8; // r8d
  __int64 v9; // rax
  _WORD *v10; // rcx
  unsigned int i; // edx
  const void *AppliedGammaRampTable; // rax
  _BYTE *v13; // rdx
  _QWORD v14[6]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v15[136]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v16; // [rsp+E8h] [rbp+10h] BYREF
  _WORD *v17; // [rsp+F0h] [rbp+18h]

  v4 = 0;
  if ( !a2 )
  {
    v5 = 87;
LABEL_3:
    EngSetLastError(v5);
    return 0LL;
  }
  v7 = PALLOCMEM2(0x600uLL, 1886221383LL, 0);
  v17 = v7;
  if ( !v7 )
  {
    v5 = 14;
    goto LABEL_3;
  }
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( !v14[0] || *(_DWORD *)(v14[0] + 32LL) )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v4 = 1;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v15);
    DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v14, v8);
    v9 = *(_QWORD *)(v14[0] + 48LL);
    v16 = v9;
    if ( *(_QWORD *)(v9 + 1696) || *(_QWORD *)(v9 + 1688) )
    {
      AppliedGammaRampTable = PDEVOBJ::GetAppliedGammaRampTable((PDEVOBJ *)&v16);
      memmove(v7, AppliedGammaRampTable, 0x600uLL);
    }
    else
    {
      v10 = v7 + 256;
      for ( i = 0; i < 0x100; ++i )
      {
        v10[256] = (_WORD)i << 8;
        *v10 = (_WORD)i << 8;
        *(v10 - 256) = (_WORD)i << 8;
        ++v10;
      }
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v15);
  }
  if ( v4 )
  {
    if ( ((unsigned __int8)a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v13 = (_BYTE *)MmUserProbeAddress;
    *v13 = *v13;
    v13[1535] = v13[1535];
    memmove(a2, v7, 0x600uLL);
  }
  Win32FreePool((__int64)v7);
  DCOBJ::~DCOBJ((DCOBJ *)v14);
  return v4;
}
