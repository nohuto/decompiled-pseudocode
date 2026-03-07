__int64 __fastcall SshpReferenceBlocker(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 296);
  _InterlockedIncrement((volatile signed __int32 *)(result + 112));
  return result;
}
