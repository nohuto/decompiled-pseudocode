__int64 __fastcall Crashdump_Register_Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 result; // rax
  int v6; // r8d
  __int64 v7; // rcx

  v3 = *(_QWORD *)(a3 + 136);
  *(_QWORD *)a1 = a2;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a3 + 336);
  result = *(unsigned int *)(a2 + 84);
  *(_DWORD *)(a1 + 24) = (unsigned __int8)result;
  v6 = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(a1 + 28) = v6;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)(v3 + 48) + 24LL);
    v7 = *(_QWORD *)(*(_QWORD *)(v3 + 48) + 16LL);
    result = (unsigned int)(8 * v6);
    *(_DWORD *)(a1 + 48) = result;
    *(_QWORD *)(a1 + 40) = v7;
    *(_OWORD *)(a1 + 56) = *(_OWORD *)(v3 + 56);
  }
  return result;
}
