/*
 * XREFs of HalpCmosRangeHandler @ 0x14051DA5C
 * Callers:
 *     HalpcGetCmosDataByType @ 0x14051DD80 (HalpcGetCmosDataByType.c)
 *     HalpcSetCmosDataByType @ 0x14051DDB0 (HalpcSetCmosDataByType.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpReadRtcStdPCAT @ 0x14051DB40 (HalpReadRtcStdPCAT.c)
 *     HalpWriteRtcStdPCAT @ 0x14051DC40 (HalpWriteRtcStdPCAT.c)
 */

__int64 __fastcall HalpCmosRangeHandler(int a1, int a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // ebp
  __int64 v11; // r14
  __int64 v12; // r8
  unsigned int v13; // r12d
  unsigned int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  __int64 v17; // [rsp+68h] [rbp+20h]

  v17 = a4;
  if ( a2 )
    return 0LL;
  v8 = 9;
  v9 = 0;
  v10 = 0;
  LODWORD(v11) = 0;
  v12 = 0LL;
  v13 = a3 + a5;
  do
  {
    if ( a3 <= v8 )
    {
      v14 = v8 - a3 + 1;
      v15 = a5 - v9;
      if ( a5 - v9 >= v14 )
        v15 = v14;
      if ( a1 )
      {
        if ( a1 != 1 )
        {
          v16 = 0;
LABEL_13:
          v9 += v16;
          a3 += v15;
          v10 += v15;
          goto LABEL_14;
        }
        v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))&CmosRangeHandlersStdPCAT[v12 * 8 + 16])(
                a3,
                a4 + v10,
                v15);
      }
      else
      {
        v16 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))funcs_14051DAE4[v12])(a3, a4 + v10, v15);
      }
      a4 = v17;
      goto LABEL_13;
    }
LABEL_14:
    if ( a3 >= v13 )
      break;
    v11 = (unsigned int)(v11 + 1);
    v12 = 3 * v11;
    v8 = *(_DWORD *)&CmosRangeHandlersStdPCAT[24 * v11 + 4];
  }
  while ( v8 );
  return v9;
}
