__int64 __fastcall RIMIDE_CreateGenericHidDevice(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rcx
  __int16 v9; // dx
  __int16 v10; // cx
  __int64 v11; // [rsp+48h] [rbp-61h]
  int v12[4]; // [rsp+60h] [rbp-49h] BYREF
  _OWORD v13[4]; // [rsp+70h] [rbp-39h] BYREF
  _OWORD v14[4]; // [rsp+B0h] [rbp+7h] BYREF

  memset(v14, 0, sizeof(v14));
  v4 = *(unsigned __int16 *)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 32);
  v12[0] = 1;
  result = rimHidP_GetCollectionDescription(v5, v4, v6, (__int64)v14);
  if ( (int)result >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 48);
    if ( v8 )
      rimHidP_GetUsageValue(
        2LL,
        13LL,
        0LL,
        85LL,
        (__int64)v12,
        *(_QWORD *)(*(_QWORD *)&v14[0] + 32LL),
        v8,
        *(unsigned __int16 *)(a1 + 56));
    v11 = *(_QWORD *)(a1 + 24);
    v13[1] = v14[1];
    v9 = *(_WORD *)(*(_QWORD *)&v14[0] + 2LL);
    v10 = **(_WORD **)&v14[0];
    v13[0] = v14[0];
    v13[2] = v14[2];
    v13[3] = v14[3];
    return RIMIDECreatePseudoHIDDevice(v10, v9, v12[0], 1u, 0LL, v13, 1, 0, 0, v11, a2);
  }
  return result;
}
