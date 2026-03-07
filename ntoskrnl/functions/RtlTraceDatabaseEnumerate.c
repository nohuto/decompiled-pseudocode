char __fastcall RtlTraceDatabaseEnumerate(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v6; // bl
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 i; // rax

  RtlpTraceDatabaseAcquireLock();
  v6 = 0;
  if ( *(_QWORD *)a2 )
  {
    if ( *(_QWORD *)a2 != a1 )
      goto LABEL_13;
    v8 = *(_DWORD *)(a2 + 8);
    LODWORD(v7) = v8;
    if ( v8 >= *(_DWORD *)(a1 + 112) )
      goto LABEL_13;
  }
  else
  {
    *(_QWORD *)a2 = a1;
    LODWORD(v7) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = **(_QWORD **)(a1 + 120);
    v8 = 0;
  }
  for ( i = *(_QWORD *)(a2 + 16); !i; *(_QWORD *)(a2 + 16) = i )
  {
    v7 = v8 + 1;
    *(_DWORD *)(a2 + 8) = v7;
    if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 112) )
      goto LABEL_10;
    ++v8;
    i = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v7);
  }
  if ( (unsigned int)v7 < *(_DWORD *)(a1 + 112) )
    goto LABEL_12;
LABEL_10:
  if ( !i )
  {
    *a3 = 0LL;
    goto LABEL_13;
  }
LABEL_12:
  *a3 = i;
  v6 = 1;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL);
LABEL_13:
  RtlpTraceDatabaseReleaseLock(a1);
  return v6;
}
