/*
 * XREFs of PnprIdentifyUnits @ 0x1409630EC
 * Callers:
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PnpQueryInterface @ 0x1407F8C60 (PnpQueryInterface.c)
 */

__int64 __fastcall PnprIdentifyUnits(_QWORD *Object, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  int Interface; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int128 v19; // [rsp+38h] [rbp-19h] BYREF
  __int128 v20; // [rsp+48h] [rbp-9h]
  __int128 v21; // [rsp+58h] [rbp+7h]
  unsigned __int8 (__fastcall *v22)(_QWORD, _QWORD); // [rsp+68h] [rbp+17h]
  __int128 v23; // [rsp+70h] [rbp+1Fh] BYREF
  __int128 v24; // [rsp+80h] [rbp+2Fh]
  __int128 v25; // [rsp+90h] [rbp+3Fh]
  __int64 v26; // [rsp+A0h] [rbp+4Fh]

  v22 = 0LL;
  v26 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  Interface = PnpQueryInterface(a2, (ULONG_PTR)&GUID_PARTITION_UNIT_INTERFACE_STANDARD, 1u, 0x38u, 0LL, (USHORT *)&v19);
  if ( Interface < 0 )
  {
    v8 = PnprContext;
    v9 = 3LL;
    v10 = *(_DWORD *)(PnprContext + 33272);
    if ( !v10 )
      v10 = 1293;
    v11 = *(_DWORD *)(PnprContext + 33276);
    *(_DWORD *)(PnprContext + 33272) = v10;
    if ( !v11 )
      v11 = 3;
    *(_DWORD *)(v8 + 33276) = v11;
    goto LABEL_28;
  }
  Interface = PnpQueryInterface(
                Object,
                (ULONG_PTR)&GUID_PARTITION_UNIT_INTERFACE_STANDARD,
                1u,
                0x38u,
                0LL,
                (USHORT *)&v23);
  if ( Interface >= 0 )
  {
    if ( (_QWORD)v25 && (_QWORD)v21 && v22 )
    {
      Interface = ((__int64 (__fastcall *)(_QWORD, _QWORD *))v25)(*((_QWORD *)&v23 + 1), a3);
      if ( Interface < 0 )
      {
        v8 = 1325LL;
        goto LABEL_9;
      }
      Interface = ((__int64 (__fastcall *)(_QWORD, __int64))v21)(*((_QWORD *)&v19 + 1), a4);
      if ( Interface < 0 )
      {
        v8 = 1333LL;
        goto LABEL_9;
      }
      if ( v22(*((_QWORD *)&v19 + 1), *a3) )
      {
        Interface = 0;
        goto LABEL_28;
      }
      v15 = PnprContext;
      v16 = *(_DWORD *)(PnprContext + 33272);
      if ( !v16 )
        v16 = 1346;
      v8 = 4LL;
      *(_DWORD *)(PnprContext + 33272) = v16;
      v17 = *(_DWORD *)(v15 + 33276);
      if ( !v17 )
        v17 = 4;
      *(_DWORD *)(v15 + 33276) = v17;
    }
    Interface = -1073741811;
    goto LABEL_28;
  }
  v8 = 1305LL;
LABEL_9:
  v12 = PnprContext;
  v9 = 3LL;
  v13 = *(_DWORD *)(PnprContext + 33272);
  if ( !v13 )
    v13 = v8;
  *(_DWORD *)(PnprContext + 33272) = v13;
  v14 = *(_DWORD *)(v12 + 33276);
  if ( !v14 )
    v14 = 3;
  *(_DWORD *)(v12 + 33276) = v14;
LABEL_28:
  if ( *((_QWORD *)&v19 + 1) )
    (*((void (__fastcall **)(_QWORD, __int64, __int64))&v20 + 1))(*((_QWORD *)&v19 + 1), v8, v9);
  if ( *((_QWORD *)&v23 + 1) )
    (*((void (__fastcall **)(_QWORD, __int64, __int64))&v24 + 1))(*((_QWORD *)&v23 + 1), v8, v9);
  return (unsigned int)Interface;
}
