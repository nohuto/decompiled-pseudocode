__int64 __fastcall HalpGetSetCmosData(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _BYTE *v5; // rdi
  int v6; // esi
  unsigned int v7; // ebx
  __int64 v8; // r14
  unsigned int v9; // ebp
  __int64 v10; // rdx

  v5 = (_BYTE *)a3;
  v6 = a2;
  if ( (unsigned int)a1 >= 2 )
    return 0LL;
  v7 = a2;
  v8 = 3LL * (unsigned int)a1;
  v9 = *((_DWORD *)&HalpCmosBusParameterTable + 6 * (unsigned int)a1);
  if ( (int)a2 + a4 - 1 <= v9 )
    v9 = a2 + a4 - 1;
  HalpAcquireCmosSpinLock(a1, a2, a3);
  if ( v7 <= v9 )
  {
    if ( a5 )
    {
      do
      {
        LOBYTE(v10) = *v5;
        ((void (__fastcall *)(_QWORD, __int64))funcs_14039F772[v8])(v7, v10);
        ++v5;
        ++v7;
      }
      while ( v7 <= v9 );
    }
    else
    {
      do
        *v5++ = ((__int64 (__fastcall *)(_QWORD))funcs_14039F727[v8])(v7++);
      while ( v7 <= v9 );
    }
  }
  _InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( HalpSystemHardwareLockInterruptsEnabled )
    _enable();
  return v7 - v6;
}
