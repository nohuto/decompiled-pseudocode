__int64 __fastcall Event(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 result; // rax

  v2 = (_QWORD *)(a2 + 64);
  result = CreateNameSpaceObject(
             *(_QWORD *)(a1 + 320),
             *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 32LL),
             *(_QWORD *)(a1 + 80),
             *(struct _EX_RUNDOWN_REF **)(a1 + 88),
             (__int64 *)(a2 + 64),
             0);
  if ( !(_DWORD)result )
    return InitEvent(a1, *(_QWORD *)(a1 + 320), *v2);
  return result;
}
