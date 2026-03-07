__int64 __fastcall CSceneNode::OnChanged(__int64 a1, int a2)
{
  if ( !*(_QWORD *)(a1 + 136) )
    return 0LL;
  if ( a2 == 2 )
    CSceneNode::ApplyTransformToSpectreResources((CSceneNode *)a1);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 120) + 72LL))(*(_QWORD *)(a1 + 120), 0LL, a1);
  return 1LL;
}
