void __fastcall TdrRetrieveSecondaryBucketingKey(struct _TDR_RECOVERY_CONTEXT *a1, unsigned int *a2)
{
  unsigned int *v2; // rax
  unsigned int v3; // eax
  _DWORD *v4; // rax
  __int64 v5; // rcx

  v2 = (unsigned int *)*((_QWORD *)a1 + 359);
  *a2 = 0;
  if ( v2 )
  {
    v3 = *v2;
    if ( v3 )
      goto LABEL_9;
  }
  v4 = (_DWORD *)*((_QWORD *)a1 + 356);
  if ( v4 )
  {
    if ( *((_QWORD *)a1 + 357) )
    {
      if ( *v4 )
      {
        v5 = (unsigned int)v4[1];
        if ( (_DWORD)v5 )
        {
          if ( *(_DWORD *)((char *)v4 + v5) == 1649636173 )
          {
            v3 = *(_DWORD *)((char *)v4 + v5 + 4);
LABEL_9:
            *a2 = v3;
          }
        }
      }
    }
  }
}
