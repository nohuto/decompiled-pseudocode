/*
 * XREFs of ClientImmLoadLayout @ 0x1C00EE528
 * Callers:
 *     ?xxxImmLoadLayout@@YAPEAUtagIMEINFOEX@@PEAUHKL__@@@Z @ 0x1C00EE480 (-xxxImmLoadLayout@@YAPEAUtagIMEINFOEX@@PEAUHKL__@@@Z.c)
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall ClientImmLoadLayout(__int64 a1, _OWORD *a2)
{
  int v3; // ebx
  __int64 *v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  _OWORD *v7; // rcx
  _OWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _OWORD *v11; // rax
  _QWORD v13[3]; // [rsp+30h] [rbp-188h] BYREF
  _BYTE v14[368]; // [rsp+48h] [rbp-170h] BYREF
  __int64 v15; // [rsp+1C0h] [rbp+8h] BYREF
  int v16; // [rsp+1D0h] [rbp+18h] BYREF
  unsigned __int64 v17; // [rsp+1D8h] [rbp+20h] BYREF

  v17 = 0LL;
  v16 = 0;
  v13[0] = a1;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  EtwTraceBeginCallback(92LL);
  v3 = KeUserModeCallback(92LL, v13, 8LL, &v17, &v16);
  EtwTraceEndCallback(92LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  if ( v3 >= 0 && v16 == 24 )
  {
    v4 = (__int64 *)v17;
    if ( v17 + 8 < v17 || v17 + 8 > MmUserProbeAddress )
      v4 = (__int64 *)MmUserProbeAddress;
    v15 = *v4;
    v5 = v15;
    if ( !v15 )
      return v5;
    v6 = *((_QWORD *)PtiCurrentShared((__int64)v4) + 64);
    if ( !v6 || (*(_DWORD *)(v6 + 84) & 1) == 0 || *(_OWORD **)(v6 + 96) != a2 )
    {
      v7 = *(_OWORD **)(v17 + 16);
      if ( v7 + 22 < v7 || (unsigned __int64)(v7 + 22) > MmUserProbeAddress )
        v7 = (_OWORD *)MmUserProbeAddress;
      v8 = v14;
      v9 = 2LL;
      v10 = 2LL;
      do
      {
        *v8 = *v7;
        v8[1] = v7[1];
        v8[2] = v7[2];
        v8[3] = v7[3];
        v8[4] = v7[4];
        v8[5] = v7[5];
        v8[6] = v7[6];
        v8 += 8;
        *(v8 - 1) = v7[7];
        v7 += 8;
        --v10;
      }
      while ( v10 );
      *v8 = *v7;
      v8[1] = v7[1];
      v8[2] = v7[2];
      v8[3] = v7[3];
      v8[4] = v7[4];
      v8[5] = v7[5];
      v11 = v14;
      do
      {
        *a2 = *v11;
        a2[1] = v11[1];
        a2[2] = v11[2];
        a2[3] = v11[3];
        a2[4] = v11[4];
        a2[5] = v11[5];
        a2[6] = v11[6];
        a2 += 8;
        *(a2 - 1) = v11[7];
        v11 += 8;
        --v9;
      }
      while ( v9 );
      *a2 = *v11;
      a2[1] = v11[1];
      a2[2] = v11[2];
      a2[3] = v11[3];
      a2[4] = v11[4];
      a2[5] = v11[5];
      return v5;
    }
  }
  return 0LL;
}
