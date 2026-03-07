__int64 __fastcall CRenderingBatchCommand::CRenderingBatchCommand(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6)
{
  int v9; // eax

  *(_DWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  if ( a3 )
    (**(void (__fastcall ***)(__int64))a3)(a3);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a6;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a6 + 16);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a6 + 32);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a6 + 48);
  v9 = *(_DWORD *)(a6 + 64);
  *(_DWORD *)(a1 + 88) = a5;
  *(_DWORD *)(a1 + 80) = v9;
  *(_DWORD *)(a1 + 84) = a4;
  *(_BYTE *)(a1 + 92) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3) == 2;
  return a1;
}
