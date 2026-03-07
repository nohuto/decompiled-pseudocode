__int64 __fastcall ScanPipelineBuilder::AddOp_Binary(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  int v6; // r14d
  int v7; // eax
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  int v10; // eax
  int FreeIntermediateBuffer; // eax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r9d
  unsigned int v16; // [rsp+20h] [rbp-28h]
  _QWORD *v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = a3;
  if ( !a2 )
  {
    v5 = -2003292287;
    v16 = 218;
LABEL_12:
    v14 = v5;
    goto LABEL_13;
  }
  v6 = *(_DWORD *)(a1 + 32);
  v7 = DynArrayImpl<0>::AddMultiple(*(_QWORD *)a1 + 8LL, 48, 1, &v17);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x342u, 0LL);
    v16 = 222;
    goto LABEL_12;
  }
  v9 = v17;
  *v17 = a2;
  v9[4] = 0LL;
  *((_DWORD *)v9 + 10) = v6;
  v9[3] = 0LL;
  v10 = ScanPipelineBuilder::AddBufferReference((_QWORD *)a1, v9 + 2, *(_DWORD *)(a1 + 24));
  v5 = v10;
  if ( v10 < 0 )
  {
    v16 = 226;
    goto LABEL_9;
  }
  FreeIntermediateBuffer = ScanPipelineBuilder::GetFreeIntermediateBuffer(a1);
  v12 = *(int *)(a1 + 24);
  if ( (unsigned int)(v12 - 3) <= 2 )
    *(_BYTE *)(v12 + a1 + 13) = 1;
  *(_DWORD *)(a1 + 24) = FreeIntermediateBuffer;
  v13 = *(_DWORD *)(a1 + 20) + 1;
  *(_DWORD *)(a1 + 20) = v13;
  *(_DWORD *)(a1 + 32) = v13;
  *((_DWORD *)v9 + 10) = v13;
  v10 = ScanPipelineBuilder::AddBufferReference((_QWORD *)a1, v9 + 1, *(_DWORD *)(a1 + 24));
  v5 = v10;
  if ( v10 < 0 )
  {
    v16 = 230;
LABEL_9:
    v14 = v10;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v14, v16, 0LL);
  }
  return v5;
}
