__int64 __fastcall IovpCompleteRequest1(__int64 a1, char a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r14
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 started; // rbp
  __int64 v10; // r14
  __int64 v11; // r12
  int v12; // r10d
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  result = VfIrpDatabaseEntryFindAndLock(a1);
  v8 = result;
  if ( result )
  {
    *(_BYTE *)(result + 61) = CurrentIrql;
    started = 0LL;
    *(_BYTE *)(result + 60) = CurrentIrql;
    v10 = *(_QWORD *)(result + 240);
    *(_QWORD *)a3 = v10;
    *(_QWORD *)(a3 + 8) = result;
    v11 = *(_QWORD *)(a1 + 184);
    if ( v10 )
    {
      if ( (*(_DWORD *)(result + 56) & 0x10) != 0 )
        ViErrorReport1(0x209u, *(const void **)(a3 + 32), (const void *)a1);
      *(_BYTE *)(v8 + 185) = a2;
      if ( *(_QWORD *)(v8 + 216) && *(int *)(v8 + 56) >= 0 )
      {
        started = VfPendingStartLogging(a1);
        *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
      }
      *(_QWORD *)(v10 + 48) = 0LL;
      v12 = *(unsigned __int8 *)(v8 + 186) - *(char *)(a1 + 67);
      *(_DWORD *)(a3 + 20) = v12;
      IovpAdvanceStackDownwards(v10 + 80, *(_BYTE *)(a1 + 67), v11, v11 + 72LL * v12, v12, 0, 0, &v13);
      result = VfIrpDatabaseEntryReleaseLock(v8);
      if ( started )
        return VfPendingFinishLogging(started);
    }
    else
    {
      return VfIrpDatabaseEntryReleaseLock(result);
    }
  }
  else
  {
    *(_QWORD *)a3 = 0LL;
  }
  return result;
}
