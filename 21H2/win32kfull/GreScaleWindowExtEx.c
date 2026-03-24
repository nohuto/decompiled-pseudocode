/*
 * XREFs of GreScaleWindowExtEx @ 0x1C01616B8
 * Callers:
 *     NtGdiScaleWindowExtEx @ 0x1C0161670 (NtGdiScaleWindowExtEx.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C012D378 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreScaleWindowExtEx(HDC a1, int a2, int a3, int a4, int a5, _QWORD *a6)
{
  unsigned int v9; // ebx
  DC *v10; // r8
  _DWORD *v11; // r8
  int v12; // eax
  int v13; // r9d
  int v14; // r9d
  DC *v16[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v17[40]; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  v10 = v16[0];
  if ( v16[0] )
  {
    if ( a6 )
    {
      *a6 = *(_QWORD *)(*((_QWORD *)v16[0] + 122) + 316LL);
      if ( (*(_DWORD *)(*((_QWORD *)v10 + 122) + 108LL) & 1) != 0 )
        *(_DWORD *)a6 = -*(_DWORD *)a6;
    }
    v11 = (_DWORD *)*((_QWORD *)v10 + 122);
    if ( v11[26] <= 6u )
      goto LABEL_15;
    v12 = a2 * v11[79];
    v13 = a4 * v11[80];
    if ( a3 && a5 && (v12 != 0x80000000 || a3 != -1) && (v13 != 0x80000000 || a5 != -1) )
    {
      if ( v12 / a3 )
      {
        v14 = v13 / a5;
        if ( v14 )
        {
          v11[79] = v12 / a3;
          *(_DWORD *)(*((_QWORD *)v16[0] + 122) + 320LL) = v14;
          DC::MirrorWindowOrg(v16[0]);
          *(_DWORD *)(*((_QWORD *)v16[0] + 122) + 340LL) |= 0x4090u;
LABEL_15:
          v9 = 1;
        }
      }
    }
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v16);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v17);
  return v9;
}
