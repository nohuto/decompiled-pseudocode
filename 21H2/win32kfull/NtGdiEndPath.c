/*
 * XREFs of NtGdiEndPath @ 0x1C0153580
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiEndPath(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v2; // ecx
  int v3; // eax
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v1 = 0;
  if ( v5[0] )
  {
    v3 = *(_DWORD *)(v5[0] + 248LL);
    if ( (v3 & 1) != 0 )
    {
      v1 = 1;
      *(_DWORD *)(v5[0] + 248LL) = v3 & 0xFFFFFFFE;
      goto LABEL_7;
    }
    v2 = 1003;
  }
  else
  {
    v2 = 6;
  }
  EngSetLastError(v2);
LABEL_7:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v5);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v6);
  return v1;
}
