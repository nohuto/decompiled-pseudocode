__int64 __fastcall HalpSaveProcessorState(__int64 a1)
{
  __int64 v1; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  if ( a1 )
  {
    KeSaveStateForHibernate();
    v1 = v4 + 240;
    *(_QWORD *)(v4 + 488) = retaddr;
    *(_QWORD *)(v1 + 152) = &v4;
    *(_QWORD *)(v1 + 120) = 1LL;
  }
  return 0LL;
}
