__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_Update2DVisualTransform_128(
        __int64 a1,
        __int64 ***a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rcx
  __int64 v4; // rax

  v2 = (__int64 *)a2[1];
  v3 = **a2;
  v4 = *v3;
  *((_OWORD *)v3 + 18) = *(_OWORD *)v2;
  *((_OWORD *)v3 + 19) = *((_OWORD *)v2 + 1);
  *((_OWORD *)v3 + 20) = *((_OWORD *)v2 + 2);
  *((_OWORD *)v3 + 21) = *((_OWORD *)v2 + 3);
  (*(void (**)(void))(v4 + 16))();
  return 0LL;
}
