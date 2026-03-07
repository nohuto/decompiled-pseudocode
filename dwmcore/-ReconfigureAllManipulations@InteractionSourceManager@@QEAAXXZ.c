void __fastcall InteractionSourceManager::ReconfigureAllManipulations(InteractionSourceManager *this)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rbx
  int v4; // edi
  CChainingHelper *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 3);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    v4 = 0;
    v5 = (CChainingHelper *)i[3];
    v10 = i[2];
    v6 = *((_QWORD *)this + 1);
    v8[1] = v5;
    v7 = *(_QWORD *)(v6 + 16);
    v8[0] = &v9;
    v8[2] = &v10;
    v9 = v7;
    do
      lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_::operator()(v8, (unsigned int)v4++);
    while ( v4 < 3 );
    CChainingHelper::UpdateConfigurationIfDirty(v5);
  }
}
