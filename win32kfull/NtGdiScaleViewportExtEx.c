/*
 * XREFs of NtGdiScaleViewportExtEx @ 0x1C02D2910
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C02D179C (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiScaleViewportExtEx(HDC a1, int a2, int a3, int a4, int a5, ULONG64 a6)
{
  unsigned int v9; // ebx
  DC *v10; // rcx
  _BYTE *v11; // rdx
  _DWORD *v12; // rcx
  int v13; // edi
  int v14; // esi
  DC *v16[6]; // [rsp+28h] [rbp-30h] BYREF

  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  v10 = v16[0];
  if ( v16[0] )
  {
    if ( a6 )
    {
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = (_BYTE *)a6;
      if ( a6 >= MmUserProbeAddress )
        v11 = (_BYTE *)MmUserProbeAddress;
      *v11 = *v11;
      v11[7] = v11[7];
      v10 = v16[0];
      *(_QWORD *)a6 = *(_QWORD *)(*((_QWORD *)v16[0] + 122) + 332LL);
    }
    v12 = (_DWORD *)*((_QWORD *)v10 + 122);
    if ( v12[26] <= 6u )
      goto LABEL_18;
    v13 = v12[83] * a2;
    v14 = v12[84] * a4;
    if ( a3 && a5 && (v13 != 0x80000000 || a3 != -1) && (v14 != 0x80000000 || a5 != -1) && v13 / a3 && v14 / a5 )
    {
      v12[83] = v13 / a3;
      *(_DWORD *)(*((_QWORD *)v16[0] + 122) + 336LL) = v14 / a5;
      DC::MirrorWindowOrg(v16[0]);
      *(_DWORD *)(*((_QWORD *)v16[0] + 122) + 340LL) |= 0x4090u;
LABEL_18:
      v9 = 1;
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v16);
  return v9;
}
