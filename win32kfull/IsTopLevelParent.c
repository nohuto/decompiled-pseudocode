bool __fastcall IsTopLevelParent(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  result = !a1
        || (v1 = *(_QWORD *)(a1 + 24), a1 == *(_QWORD *)(v1 + 104))
        || a1 == *(_QWORD *)(*(_QWORD *)(v1 + 8) + 24LL);
  return result;
}
