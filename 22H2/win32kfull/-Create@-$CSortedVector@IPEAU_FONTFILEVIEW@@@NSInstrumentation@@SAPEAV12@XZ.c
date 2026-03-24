/*
 * XREFs of ?Create@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00F41E4
 * Callers:
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C00F40E4 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Create()
{
  _QWORD *PoolWithTag; // rbx
  PVOID v1; // rax
  _QWORD *result; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x38uLL, 0x63497355u);
  if ( PoolWithTag )
  {
    v1 = ExAllocatePoolWithTag(PagedPoolSession, 0x2000uLL, 0x63497355u);
    if ( v1 )
    {
      PoolWithTag[5] = 0LL;
      PoolWithTag[6] = v1;
      result = PoolWithTag;
      PoolWithTag[4] = 512LL;
      *((_DWORD *)PoolWithTag + 6) = 0;
      *((_DWORD *)PoolWithTag + 7) = 0;
      *PoolWithTag = 0LL;
      *((_DWORD *)PoolWithTag + 4) = 0;
      return result;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return 0LL;
}
