char __fastcall CInteractionTracker::SendValuesChangedCallbackIfNecessary(__int64 a1, __int64 *a2, float a3)
{
  char v4; // di
  __int64 v6; // rcx
  char v7; // r10
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // xmm0_8
  __int64 v12; // rax
  int v13; // eax
  __int64 v15; // [rsp+50h] [rbp-48h] BYREF
  int v16; // [rsp+58h] [rbp-40h]
  _QWORD v17[2]; // [rsp+60h] [rbp-38h] BYREF

  v4 = 1;
  if ( !CInteractionTracker::ShouldNotify((CInteractionTracker *)a1) )
    return 0;
  if ( v7 )
    goto LABEL_7;
  v8 = *(_QWORD *)(v6 + 512) - *a2;
  if ( !v8 )
    v8 = *(unsigned int *)(a1 + 520) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( !v8 && *(float *)(a1 + 524) == a3 )
    return 0;
LABEL_7:
  v9 = *(_QWORD *)(a1 + 48);
  if ( v9 )
    v10 = *(_DWORD *)(v9 + 76);
  else
    v10 = 0;
  v11 = *a2;
  v16 = *((_DWORD *)a2 + 2);
  v17[0] = v10;
  v17[1] = *(unsigned int *)(a1 + 64);
  v12 = *(_QWORD *)(a1 + 16);
  v15 = v11;
  CoreUICallSend(*(_QWORD *)(*(_QWORD *)(v12 + 1240) + 40LL), v17, 2LL, 11LL, 0, &unk_18033941F, &v15);
  v13 = *((_DWORD *)a2 + 2);
  *(_QWORD *)(a1 + 512) = *a2;
  *(_DWORD *)(a1 + 520) = v13;
  *(float *)(a1 + 524) = a3;
  return v4;
}
