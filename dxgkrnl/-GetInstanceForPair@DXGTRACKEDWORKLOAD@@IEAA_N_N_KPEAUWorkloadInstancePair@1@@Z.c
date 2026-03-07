char __fastcall DXGTRACKEDWORKLOAD::GetInstanceForPair(
        DXGTRACKEDWORKLOAD *this,
        char a2,
        __int64 a3,
        struct DXGTRACKEDWORKLOAD::WorkloadInstancePair *a4)
{
  unsigned int v4; // r11d
  __int64 v5; // r10
  __int64 v6; // rbx
  char *v7; // rax
  char v8; // cl

  v4 = *((_DWORD *)this + 27);
  v5 = 0LL;
  if ( !v4 )
    return 0;
  v6 = *((_QWORD *)this + 3);
  while ( 1 )
  {
    v7 = (char *)(v6 + 24 * v5);
    v8 = *v7;
    if ( !a2 )
      break;
    if ( v8 && *((_QWORD *)v7 + 1) == a3 )
    {
      *((_QWORD *)a4 + 16) = v7;
      return 1;
    }
LABEL_9:
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= v4 )
      return 0;
  }
  if ( v8 )
    goto LABEL_9;
  *((_QWORD *)a4 + 16) = v7;
  *v7 = 1;
  *(_QWORD *)(*((_QWORD *)a4 + 16) + 8LL) = a3;
  *(_QWORD *)(*((_QWORD *)a4 + 16) + 16LL) = 0LL;
  return 1;
}
