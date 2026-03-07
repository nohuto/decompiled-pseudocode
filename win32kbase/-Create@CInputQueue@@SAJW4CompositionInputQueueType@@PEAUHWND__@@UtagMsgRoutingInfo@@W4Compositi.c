__int64 __fastcall CInputQueue::Create(int a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  NSInstrumentation::CLeakTrackingAllocator *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int128 v12; // xmm1
  int v13; // edi
  _OWORD v15[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]

  v9 = gpLeakTrackingAllocator;
  *a5 = 0LL;
  v10 = NSInstrumentation::CLeakTrackingAllocator::Allocate(v9, 260LL, 0x48uLL, 0x71684D49u);
  v11 = v10;
  if ( v10 )
  {
    *(_QWORD *)(v10 + 16) = 0LL;
    v12 = *(_OWORD *)(a3 + 16);
    *(_QWORD *)v10 = &CInputQueue::`vftable';
    *(_DWORD *)(v10 + 8) = 1;
    *(_DWORD *)(v10 + 12) = a1;
    *(_OWORD *)(v10 + 24) = 0LL;
    *(_OWORD *)(v10 + 40) = 0LL;
    *(_QWORD *)(v10 + 56) = 0LL;
    v15[0] = *(_OWORD *)a3;
    v16 = *(_QWORD *)(a3 + 32);
    *(_DWORD *)(v10 + 64) = a4;
    v15[1] = v12;
    v13 = CInputQueue::Initialize(v10, a2, v15);
    if ( v13 < 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    else
      *a5 = v11;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v13;
}
