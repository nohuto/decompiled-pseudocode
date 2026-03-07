void __fastcall CInputSpace::FreeRegions(CInputSpace *this)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rax

  v2 = (_QWORD **)((char *)this + 1456);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    v4 = *v3;
    v5 = (_QWORD *)v3[1];
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v5 != v3 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
  }
  *((_DWORD *)this + 363) = 0;
}
