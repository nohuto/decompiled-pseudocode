/*
 * XREFs of ?AllocTemporaryBuffer@UmfdUMBuffer@@AEAA_NK@Z @ 0x1C02DEE24
 * Callers:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C00A658C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 * Callees:
 *     ?AlignSizeTo@UmfdUMBuffer@@CA_NKKPEAK@Z @ 0x1C00D1670 (-AlignSizeTo@UmfdUMBuffer@@CA_NKKPEAK@Z.c)
 */

char __fastcall UmfdUMBuffer::AllocTemporaryBuffer(UmfdUMBuffer *this, __int64 a2)
{
  void *v2; // rax
  ULONG_PTR v3; // rdi
  ULONG_PTR v6; // rax
  int v7; // ecx
  int v8; // eax
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID v10; // [rsp+60h] [rbp+20h] BYREF
  ULONG_PTR v11; // [rsp+70h] [rbp+30h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp+38h] BYREF

  v2 = (void *)*((_QWORD *)this + 1);
  v3 = (unsigned int)a2;
  if ( v2 )
  {
    if ( (unsigned int)a2 <= *((_DWORD *)this + 4) )
      return 1;
    RegionSize = 0LL;
    BaseAddress[0] = v2;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, &RegionSize, 0x8000u);
    *((_QWORD *)this + 1) = 0LL;
    *((_DWORD *)this + 4) = 0;
  }
  LODWORD(v10) = 0;
  if ( UmfdUMBuffer::AlignSizeTo(v3, a2, (unsigned int *)&v10) )
  {
    v6 = (unsigned int)v10;
    v10 = 0LL;
    v11 = v6;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v10, 0LL, &v11, 0x3000u, 4u) >= 0 )
    {
      v7 = v11;
      if ( v11 >= v3 )
      {
        if ( v11 > 0xFFFFFFFF )
        {
          v8 = -2147024362;
          v7 = -1;
        }
        else
        {
          v8 = 0;
        }
        *((_DWORD *)this + 4) = v7;
        if ( v8 >= 0 )
        {
          *((_QWORD *)this + 1) = v10;
          return 1;
        }
      }
      RegionSize = 0LL;
      BaseAddress[0] = v10;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, &RegionSize, 0x8000u);
    }
  }
  return 0;
}
