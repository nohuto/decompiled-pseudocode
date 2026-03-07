__int64 __fastcall Bulk_Stage_AcquireMdl(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // r14
  struct _MDL *v4; // rbx
  unsigned int i; // edx
  unsigned int ByteCount; // eax
  ULONG v7; // r12d
  char *v8; // r15
  struct _MDL *Mdl; // rax
  int v10; // r8d
  int v11; // edx

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v4 = *(struct _MDL **)(*(_QWORD *)a1 + 80LL);
  for ( i = *(_DWORD *)(*(_QWORD *)a1 + 112LL); ; i -= ByteCount )
  {
    ByteCount = v4->ByteCount;
    if ( i < ByteCount )
      break;
    v4 = v4->Next;
  }
  if ( i )
  {
    v7 = v4->ByteCount - i;
    v8 = (char *)v4->StartVa + v4->ByteOffset + i;
    Mdl = IoAllocateMdl(v8, v7, 0, 0, 0LL);
    *(_QWORD *)(a1 + 48) = Mdl;
    if ( Mdl )
    {
      *(_BYTE *)(a1 + 44) = 1;
      IoBuildPartialMdl(v4, Mdl, v8, v7);
      **(_QWORD **)(a1 + 48) = v4->Next;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL);
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL), v11, v10, 28);
      }
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 48) = v4;
  }
  return v2;
}
