/*
 * XREFs of KeGetTbSize @ 0x140B5CBF8
 * Callers:
 *     MiInitializeTbFlushing @ 0x140B5CBA8 (MiInitializeTbFlushing.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiGetTbLeafInfo @ 0x140B92F78 (KiGetTbLeafInfo.c)
 */

__int64 KeGetTbSize()
{
  unsigned __int8 CpuVendor; // cl
  unsigned int v6; // r8d
  unsigned int v12; // ebx
  __int64 *v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  int *v16; // r8
  unsigned int i; // ecx
  unsigned int v29; // ebx
  int *v30; // rdx
  __int128 v31; // [rsp+20h] [rbp-19h] BYREF
  char v32; // [rsp+30h] [rbp-9h]
  __int64 v33; // [rsp+38h] [rbp-1h] BYREF
  char v34; // [rsp+40h] [rbp+7h]
  __int64 v35; // [rsp+48h] [rbp+Fh]
  char v36; // [rsp+50h] [rbp+17h]
  __int64 v37; // [rsp+58h] [rbp+1Fh]
  char v38; // [rsp+60h] [rbp+27h]
  __int64 v39; // [rsp+68h] [rbp+2Fh]
  char v40; // [rsp+70h] [rbp+37h]
  __int64 v41; // [rsp+78h] [rbp+3Fh]

  v32 = -76;
  v35 = 512LL;
  v41 = 512LL;
  v31 = 0LL;
  v33 = 256LL;
  v34 = 100;
  CpuVendor = KeGetCurrentPrcb()->CpuVendor;
  v36 = -63;
  v37 = 1024LL;
  v38 = -61;
  v39 = 1536LL;
  v40 = -54;
  if ( CpuVendor != 1 )
  {
    if ( CpuVendor == 2 )
    {
      _RAX = 0LL;
      __asm { cpuid }
      *(_QWORD *)((char *)&v31 + 4) = __PAIR64__(_RCX, _RBX);
      v6 = _RAX;
      HIDWORD(v31) = _RDX;
      if ( (unsigned int)_RAX >= 2 )
      {
        _RAX = 2LL;
        __asm { cpuid }
        *(_QWORD *)&v31 = __PAIR64__(_RBX, _RAX);
        *((_QWORD *)&v31 + 1) = __PAIR64__(_RDX, _RCX);
        if ( v6 >= 0x18 )
        {
          for ( i = 0; i < 0x20; i += 8 )
          {
            v29 = 0;
            v30 = (int *)&v31;
            do
            {
              if ( *v30 >= 0 && (unsigned __int8)((unsigned int)*v30 >> i) == 0xFE )
                return KiGetTbLeafInfo();
              ++v29;
              ++v30;
            }
            while ( v29 < 4 );
          }
        }
        v12 = 0;
        v13 = &v33;
        do
        {
          v14 = 0;
          while ( 2 )
          {
            v15 = 0;
            v16 = (int *)&v31;
            do
            {
              if ( *v16 >= 0 && (unsigned __int8)((unsigned int)*v16 >> v14) == *((unsigned __int8 *)v13 - 8) )
                return *v13;
              ++v15;
              ++v16;
            }
            while ( v15 < 4 );
            v14 += 8;
            if ( v14 < 0x20 )
              continue;
            break;
          }
          ++v12;
          v13 += 2;
        }
        while ( v12 < 5 );
      }
    }
    return 0LL;
  }
  _RAX = 0x80000000LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 0x80000006 )
    return 0LL;
  _RAX = 2147483654LL;
  __asm { cpuid }
  return WORD1(_RBX) & 0xFFF;
}
