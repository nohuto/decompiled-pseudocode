void __fastcall VIDMM_GLOBAL::RecordPageMappingHistory(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx

  if ( *(_QWORD *)(a1 + 41056) )
  {
    v10 = a1 + 41000;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
    v11 = *(unsigned int *)(a1 + 41064);
    if ( (_DWORD)v11 == dword_1C0076464 )
    {
      *(_DWORD *)(a1 + 41064) = 0;
      v11 = 0LL;
    }
    v12 = *(_QWORD *)(a1 + 41056) + 48 * v11;
    *(_QWORD *)v12 = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(v12 + 32) = a5;
    *(_QWORD *)(v12 + 24) = a6;
    *(_DWORD *)(v12 + 36) = a2;
    *(_QWORD *)(v12 + 8) = a3;
    *(_QWORD *)(v12 + 16) = a4;
    *(_DWORD *)(v12 + 40) = *(_DWORD *)(a1 + 40992);
    ++*(_DWORD *)(a1 + 41064);
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
}
