__int64 __fastcall __EnumDisplayQueryRoutine(unsigned __int16 *a1, int a2, void *a3, unsigned int a4, _QWORD *a5)
{
  unsigned int v5; // edi
  size_t v6; // rbx
  void *v8; // rax
  unsigned int v10; // ebp
  void *v11; // rax

  v5 = 0;
  v6 = a4;
  if ( a4 > 2 )
  {
    if ( a2 == 1 )
    {
      if ( !a5[26] )
      {
        v8 = (void *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                       gpLeakTrackingAllocator,
                       260LL,
                       a4,
                       0x73726447u);
        a5[26] = v8;
        if ( v8 )
        {
          memmove(v8, a3, (unsigned int)v6);
          *((_DWORD *)a5 + 65) = v6;
          return v5;
        }
        return (unsigned int)-1073741670;
      }
    }
    else if ( a2 == 3 && !a5[26] )
    {
      v10 = a4 + 2;
      if ( a4 == -2 )
      {
        a5[26] = 0LL;
      }
      else
      {
        v11 = (void *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                        gpLeakTrackingAllocator,
                        260LL,
                        v10,
                        0x73726447u);
        a5[26] = v11;
        if ( v11 )
        {
          memmove(v11, a3, v6);
          *(_WORD *)(v6 + a5[26]) = 0;
          *((_DWORD *)a5 + 65) = v10;
          return v5;
        }
      }
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}
