PVOID __fastcall ClassAllocString(PVOID *a1, unsigned int a2)
{
  if ( a1 )
    return RtlAllocateHeap(a1[16], 0, a2);
  else
    return (PVOID)Win32AllocPoolZInit(a2, 1818456917LL);
}
