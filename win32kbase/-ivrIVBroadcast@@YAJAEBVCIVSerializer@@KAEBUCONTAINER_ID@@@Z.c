int __fastcall ivrIVBroadcast(const struct CIVSerializer *a1, unsigned int a2, const struct CONTAINER_ID *a3)
{
  if ( gpfnIVBroadcast )
    return gpfnIVBroadcast(*((const void **)a1 + 3), *((_DWORD *)a1 + 8), KeGetCurrentThread(), a2, a3);
  else
    return -1073741637;
}
