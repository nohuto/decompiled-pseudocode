void __fastcall MULTIDEVLOCKOBJ::vInit(MULTIDEVLOCKOBJ *this, struct _MDEV *a2)
{
  unsigned int v2; // edi
  unsigned int v5; // eax
  char *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // eax

  v2 = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  if ( !a2 )
  {
    *(_DWORD *)this = 1;
    return;
  }
  v5 = 2 * *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 1) = v5;
  if ( v5 <= 0xA )
  {
    v6 = (char *)this + 24;
    *((_QWORD *)this + 1) = (char *)this + 24;
    v7 = *((unsigned int *)a2 + 5);
    *(_DWORD *)this = 1;
LABEL_6:
    *((_QWORD *)this + 2) = &v6[8 * v7];
    if ( v6 && *((_DWORD *)a2 + 5) )
    {
      do
      {
        v8 = v2++;
        v9 = *((_QWORD *)a2 + 7 * v8 + 5);
        *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v8) = *(_QWORD *)(v9 + 48);
        *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v8) = *(_QWORD *)(v9 + 56);
      }
      while ( v2 < *((_DWORD *)a2 + 5) );
    }
    return;
  }
  v10 = 16 * *((_DWORD *)a2 + 5);
  if ( v10 )
    v6 = (char *)NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 260LL, v10, 0x706D7447u);
  else
    v6 = 0LL;
  *((_QWORD *)this + 1) = v6;
  if ( v6 )
  {
    v7 = *((unsigned int *)a2 + 5);
    *(_DWORD *)this = 3;
    goto LABEL_6;
  }
}
