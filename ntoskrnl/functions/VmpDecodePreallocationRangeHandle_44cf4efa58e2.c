_QWORD *__fastcall VmpDecodePreallocationRangeHandle(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx

  if ( _InterlockedDecrement64((volatile signed __int64 *)(a1 + 80)) == -1 )
    NT_ASSERT("NewCount != 0xffffffffffffffffui64");
  v2 = (_QWORD *)(a2 ^ a1);
  if ( v2[2] != -1LL )
    NT_ASSERT("VaMemoryRange->VaTreeNode.ParentValue == 0xffffffffffffffffui64");
  if ( v2[3] )
    NT_ASSERT("VaMemoryRange->StartVpn == 0");
  if ( v2[4] )
    NT_ASSERT("VaMemoryRange->LastVpn == 0");
  v3 = (_QWORD *)v2[5];
  if ( v3 == v2 + 5 )
    NT_ASSERT("IsListEmpty(&VaMemoryRange->GpaRangeList) == 0");
  if ( (_QWORD *)*v3 != v2 + 5 )
    NT_ASSERT("VaMemoryRange->GpaRangeList.Flink->Flink == &VaMemoryRange->GpaRangeList");
  return v2;
}
