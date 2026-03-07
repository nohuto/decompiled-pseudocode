__int64 __fastcall ObpGrantAccess(int a1, char *a2, struct _ACCESS_STATE *a3, __int64 a4, __int16 a5, ACCESS_MASK *a6)
{
  KPROCESSOR_MODE v7; // dl
  struct _ACCESS_STATE *v8; // rbx
  struct _ACCESS_STATE *v9; // rdx
  __int64 result; // rax
  NTSTATUS v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0;
  v7 = 1;
  v8 = a3;
  if ( (a5 & 0x400) == 0 )
    v7 = a4;
  if ( (unsigned int)(a1 - 1) <= 1 )
  {
    LOBYTE(a4) = v7;
    v9 = a3;
    LOBYTE(a3) = 1;
    if ( !ObCheckObjectAccess(a2, v9, (__int64)a3, a4, &v11) )
      return (unsigned int)v11;
    goto LABEL_5;
  }
  result = ObpAdjustCreatorAccessState(
             a3,
             v7,
             (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)],
             (__int64)a2);
  if ( (int)result >= 0 )
  {
LABEL_5:
    *a6 = v8->PreviouslyGrantedAccess;
    return 0LL;
  }
  return result;
}
