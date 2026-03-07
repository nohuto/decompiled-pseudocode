__int64 __fastcall IopLiveDumpValidateCancelObject(__int64 a1)
{
  unsigned int v1; // r8d
  POBJECT_TYPE *v3; // rax

  v1 = 0;
  if ( !a1 )
    return 0LL;
  v3 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  if ( v3 != ExEventObjectType && v3 != PsProcessType && v3 != PsThreadType && v3 != (POBJECT_TYPE *)ExTimerObjectType )
    return (unsigned int)-1073741811;
  return v1;
}
