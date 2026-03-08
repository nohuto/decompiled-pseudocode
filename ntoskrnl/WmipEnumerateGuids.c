/*
 * XREFs of WmipEnumerateGuids @ 0x1409DD9FC
 * Callers:
 *     WmipIoControl @ 0x140787290 (WmipIoControl.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     WmipGetGuidPropertiesFromGuidEntry @ 0x1409DDB04 (WmipGetGuidPropertiesFromGuidEntry.c)
 */

__int64 __fastcall WmipEnumerateGuids(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  __int64 v5; // rbx
  int v8; // esi
  unsigned int v9; // ebp
  _QWORD **v10; // r14
  _QWORD *i; // r8
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  __int64 result; // rax

  v5 = 0LL;
  v8 = 0;
  v9 = (a3 - 8) / 0x24u;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v10 = (_QWORD **)WmipGEHeadPtr;
  for ( i = *(_QWORD **)WmipGEHeadPtr; i != v10; i = (_QWORD *)*i )
  {
    ++v8;
    if ( (unsigned int)v5 < v9 )
    {
      v12 = 9 * v5;
      v5 = (unsigned int)(v5 + 1);
      *(_OWORD *)&a2[v12 + 2] = *(_OWORD *)(i + 9);
    }
  }
  if ( a1 == 2244960 )
  {
    v13 = *v10;
    v8 = 0;
    v5 = 0LL;
    while ( v13 != v10 )
    {
      ++v8;
      if ( (unsigned int)v5 < v9 )
      {
        WmipGetGuidPropertiesFromGuidEntry(&a2[8 * v5 + 2 + (unsigned int)v5], v13);
        v5 = (unsigned int)(v5 + 1);
      }
      v13 = (_QWORD *)*v13;
    }
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  *a4 = 36 * v5 + 8;
  result = 0LL;
  *a2 = v8;
  a2[1] = v5;
  return result;
}
