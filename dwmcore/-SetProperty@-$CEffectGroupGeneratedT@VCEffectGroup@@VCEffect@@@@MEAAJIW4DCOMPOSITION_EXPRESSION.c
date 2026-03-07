__int64 __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::SetProperty(__int64 *a1, int a2, int a3, _DWORD *a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+20h] [rbp-18h]

  if ( a3 != 18 )
  {
    v7 = 4164;
LABEL_9:
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024809, v7, 0LL);
    return v5;
  }
  if ( a2 )
  {
    v7 = 4159;
    goto LABEL_9;
  }
  if ( *(float *)a4 != *((float *)a1 + 20) )
  {
    v4 = *a1;
    *((_DWORD *)a1 + 20) = *a4;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v4 + 72))(a1, 0LL, 0LL);
  }
  return 0;
}
