__int64 __fastcall InputTransform::GetTransform(
        InputTransform *this,
        const struct tagWND *a2,
        struct tagINPUT_TRANSFORM *a3)
{
  __int64 v5; // rax
  __int64 result; // rax
  CompositionInputObject *v7; // rdi
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  _OWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( !(unsigned __int8)IsInputThread(this, a2, a3)
    && PtiCurrentShared() != (struct tagTHREADINFO *)gptiManipulationThread )
  {
    return 0LL;
  }
  v5 = *((_QWORD *)this + 34);
  if ( !v5 )
    return 0LL;
  v7 = *(CompositionInputObject **)(v5 + 96);
  if ( !v7 )
    return 0LL;
  memset_0(v11, 0, sizeof(v11));
  if ( (int)CompositionInputObject::QueryTransform(v7, (struct tagINPUT_TRANSFORM *)v11) < 0 )
    return 0LL;
  result = 1LL;
  v8 = v11[1];
  *(_OWORD *)a2 = v11[0];
  v9 = v11[2];
  *((_OWORD *)a2 + 1) = v8;
  v10 = v11[3];
  *((_OWORD *)a2 + 2) = v9;
  *((_OWORD *)a2 + 3) = v10;
  return result;
}
