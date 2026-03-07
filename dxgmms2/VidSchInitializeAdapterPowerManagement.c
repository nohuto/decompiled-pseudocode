__int64 __fastcall VidSchInitializeAdapterPowerManagement(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  *(_OWORD *)(a1 + 3056) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 3072) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 3088) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 3104) = *(_OWORD *)(a2 + 48);
  v2 = *(_OWORD *)(a2 + 64);
  *(_BYTE *)(a1 + 3152) = 0;
  *(_OWORD *)(a1 + 3120) = v2;
  result = *(unsigned int *)(a2 + 72);
  *(_QWORD *)(a1 + 3144) = 10000 * result;
  return result;
}
