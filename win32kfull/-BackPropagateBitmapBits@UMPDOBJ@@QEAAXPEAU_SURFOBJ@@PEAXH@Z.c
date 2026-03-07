void __fastcall UMPDOBJ::BackPropagateBitmapBits(char **this, struct _SURFOBJ *a2, void *a3, int a4)
{
  ULONG cjBits; // ebx
  char *KernelPtr; // rax

  if ( a4 )
  {
    cjBits = a2->cjBits;
    KernelPtr = UMPDOBJ::GetKernelPtr(this, (char *)a2->pvBits);
    memmove(a3, KernelPtr, cjBits);
  }
}
