__int64 __fastcall DestroyProcessesClasses(struct tagPROCESSINFO *a1)
{
  _QWORD *v2; // rdi
  __int64 result; // rax

  v2 = (_QWORD *)((char *)a1 + 344);
  while ( *v2 )
    result = DestroyClass(a1);
  while ( *((_QWORD *)a1 + 44) )
    result = DestroyClass(a1);
  return result;
}
