/*
 * XREFs of SglToPrp @ 0x1C001B550
 * Callers:
 *     ScsiToNVMe @ 0x1C00010C0 (ScsiToNVMe.c)
 *     SetPrpFromSrb @ 0x1C001B51C (SetPrpFromSrb.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     memset @ 0x1C0004580 (memset.c)
 */

__int64 __fastcall SglToPrp(__int64 a1, __int64 a2)
{
  char v2; // bp
  unsigned int v3; // esi
  __int64 v4; // rdx
  _QWORD *SrbExtension; // rbx
  __int64 v6; // r8
  _DWORD *v7; // rax
  _QWORD *v8; // r8
  __int64 v9; // r13
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r15
  int v14; // r14d
  int v15; // eax
  _DWORD *v16; // rax
  __int64 PhysicalAddress; // rax
  int v21; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  v3 = 0;
  SrbExtension = (_QWORD *)GetSrbExtension(a2);
  if ( (*((_BYTE *)SrbExtension + 4253) & 6) == 2 )
  {
    if ( !SrbExtension[527] )
      SrbExtension[527] = StorPortGetScatterGatherList(v6, v4);
    v7 = (_DWORD *)SrbExtension[527];
    v8 = SrbExtension + 515;
    v9 = 0LL;
    v10 = SrbExtension + 515;
    v21 = 0;
    if ( *v7 )
    {
      do
      {
        if ( v2 )
        {
          memset(SrbExtension, 0, 0x1000uLL);
          v2 = 0;
          v8 = SrbExtension + 515;
        }
        v11 = SrbExtension[527];
        v12 = *(unsigned int *)(v11 + 24 * v9 + 24);
        v13 = *(_QWORD *)(v11 + 24 * v9 + 16);
        if ( v12 + v13 % 4096 > 4096 )
        {
          if ( (_DWORD)v12 )
          {
            do
            {
              v14 = v13 & 0xFFF;
              if ( v2 )
              {
                memset(SrbExtension, 0, 0x1000uLL);
                v2 = 0;
              }
              *v10 = v13;
              v8 = SrbExtension + 515;
              if ( (unsigned int)(v14 + v12) <= 0x1000 )
                break;
              v15 = v14 + v12;
              LODWORD(v12) = v14 + v12 - 4096;
              v13 += (unsigned int)(4096 - v14);
              if ( v10 == v8 )
              {
                v2 = 1;
                v10 = SrbExtension;
              }
              else
              {
                ++v10;
              }
              ++v3;
            }
            while ( v15 != 4096 );
            LODWORD(v9) = v21;
          }
        }
        else
        {
          *v10 = v13;
        }
        if ( v10 == v8 )
        {
          v2 = 1;
          v10 = SrbExtension;
        }
        else
        {
          ++v10;
        }
        v16 = (_DWORD *)SrbExtension[527];
        v9 = (unsigned int)(v9 + 1);
        ++v3;
        v21 = v9;
      }
      while ( (unsigned int)v9 < *v16 );
      if ( v3 >= 2 )
      {
        if ( v3 == 2 )
        {
          PhysicalAddress = *SrbExtension;
        }
        else
        {
          v21 = 0;
          PhysicalAddress = StorPortGetPhysicalAddress(a1, a2, SrbExtension, &v21);
        }
        SrbExtension[516] = PhysicalAddress;
      }
    }
  }
  return 0LL;
}
