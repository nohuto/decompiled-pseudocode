__int64 __fastcall anonymous_namespace_::CheckTopLevelOnly(__int64 a1)
{
  while ( a1 && (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x29D )
    a1 = *(_QWORD *)(a1 + 112);
  return a1;
}
