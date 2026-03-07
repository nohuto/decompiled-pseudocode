int __fastcall ivrIVSend(const struct CIVSerializer *a1, unsigned int a2, const struct CONTAINER_ID *a3)
{
  _DWORD *v3; // r10
  __int64 v5; // rdx

  v3 = (_DWORD *)*((_QWORD *)a1 + 3);
  v5 = *((unsigned int *)a1 + 8);
  if ( v5 - 16 != *v3 )
    KeBugCheck(0x164u);
  if ( gpfnIVSend )
    return gpfnIVSend(v3, v5, KeGetCurrentThread(), a2, a3);
  else
    return -1073741637;
}
