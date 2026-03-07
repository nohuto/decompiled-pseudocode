_DWORD *__fastcall SepCopyTokenIntegrity(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _DWORD *result; // rax

  v2 = *(unsigned int *)(a1 + 208);
  if ( (_DWORD)v2 == -1 || (result = (_DWORD *)(*(_QWORD *)(a1 + 152) + 16 * v2)) == 0LL )
  {
    result = SeUntrustedMandatorySid;
    *(_QWORD *)a2 = SeUntrustedMandatorySid;
    *(_DWORD *)(a2 + 8) = 96;
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)result;
    *(_DWORD *)(a2 + 8) = result[2];
  }
  return result;
}
