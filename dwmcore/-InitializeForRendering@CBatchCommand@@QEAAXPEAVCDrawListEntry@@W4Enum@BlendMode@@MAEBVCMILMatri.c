char __fastcall CBatchCommand::InitializeForRendering(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        float a4,
        CMILMatrix *a5)
{
  int v8; // ebx
  int v9; // eax
  char result; // al
  int v11; // ebx

  v8 = 1;
  if ( (a2[12] & 8) != 0 )
  {
    if ( a3 == 5 && CMILMatrix::Is2DAxisAlignedPreserving(a5) )
      v8 = 4;
    v11 = v8 - 4;
    if ( !v11 )
      return CMegaRectBatchCommand::CMegaRectBatchCommand(a1, a2, a3);
    if ( v11 == 1 )
      goto LABEL_3;
  }
  else if ( (a2[12] & 0x1000) != 0 )
  {
LABEL_3:
    *(_DWORD *)a1 = 5;
    *(_QWORD *)(a1 + 8) = a2;
    (**(void (__fastcall ***)(_DWORD *))a2)(a2);
    *(_OWORD *)(a1 + 16) = *(_OWORD *)a5;
    *(_OWORD *)(a1 + 32) = *((_OWORD *)a5 + 1);
    *(_OWORD *)(a1 + 48) = *((_OWORD *)a5 + 2);
    *(_OWORD *)(a1 + 64) = *((_OWORD *)a5 + 3);
    v9 = *((_DWORD *)a5 + 16);
    *(float *)(a1 + 88) = a4;
    *(_DWORD *)(a1 + 80) = v9;
    *(_DWORD *)(a1 + 84) = a3;
    result = (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 32LL))(a2) == 2;
    *(_BYTE *)(a1 + 92) = result;
    *(_DWORD *)(a1 + 176) = 0;
    return result;
  }
  return CRenderingBatchCommand::CRenderingBatchCommand(a1, 1LL, a2, a3, LODWORD(a4), a5);
}
