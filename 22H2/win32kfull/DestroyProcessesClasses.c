/*
 * XREFs of DestroyProcessesClasses @ 0x1C00EBC40
 * Callers:
 *     <none>
 * Callees:
 *     DestroyClass @ 0x1C00EAB74 (DestroyClass.c)
 */

__int64 __fastcall DestroyProcessesClasses(struct tagPROCESSINFO *a1)
{
  struct _CALLPROCDATA ***i; // rdi
  __int64 result; // rax

  for ( i = (struct _CALLPROCDATA ***)((char *)a1 + 344); *i; result = DestroyClass(a1, i) )
    ;
  while ( *((_QWORD *)a1 + 44) )
    result = DestroyClass(a1, (struct _CALLPROCDATA ***)a1 + 44);
  return result;
}
