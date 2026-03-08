/*
 * XREFs of HalpBuddyAllocatorReserveLogicalAddress @ 0x140530290
 * Callers:
 *     <none>
 * Callees:
 *     HalpBuddyAllocatorBltAdd @ 0x14052FBC0 (HalpBuddyAllocatorBltAdd.c)
 *     HalpBuddyAllocatorBltRemove @ 0x14052FEF4 (HalpBuddyAllocatorBltRemove.c)
 *     HalpBuddyAllocatorSplitNode @ 0x1405304E8 (HalpBuddyAllocatorSplitNode.c)
 */

__int64 __fastcall HalpBuddyAllocatorReserveLogicalAddress(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v5; // r8
  unsigned int v6; // edi
  unsigned __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 **v11; // r12
  __int64 **v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  bool v17; // zf
  _QWORD *v18; // rcx
  __int64 v19; // rax

  v3 = *(__int64 **)(a1 + 88);
  v5 = a3 << 12;
  v6 = 0;
  v8 = v3[6] + v3[7];
  if ( !*(_BYTE *)(a1 + 120) )
    return (unsigned int)-1073741823;
  if ( (a2 & 0xFFF) != 0 )
    return (unsigned int)-1073741584;
  if ( !v5 )
    return (unsigned int)-1073741583;
  if ( a2 >= v8 )
    return v6;
  if ( v5 + a2 <= v8 )
    v8 = v5 + a2;
  while ( 1 )
  {
    v9 = v3[6];
    if ( v9 == a2 && v3[7] + v9 == v8 )
    {
LABEL_22:
      v11 = (__int64 **)(v3 + 2);
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              if ( v3 == *v11 )
                return v6;
              v12 = (__int64 **)(v3 + 3);
              v13 = v3[3];
              if ( !v13 || a2 >= *(_QWORD *)(v13 + 48) + *(_QWORD *)(v13 + 56) )
                break;
              v3 = (__int64 *)v3[3];
            }
            v14 = v3[4];
            if ( !v14 || v8 <= *(_QWORD *)(v14 + 48) )
              break;
            v3 = (__int64 *)v3[4];
          }
          v15 = v3[6];
          if ( a2 > v15 && a2 < v15 + v3[7] )
            break;
          v16 = v3[7];
          if ( v8 < v16 + v15 && v8 > v15 )
            break;
          if ( a2 > v15 || v8 < v16 + v15 )
            goto LABEL_43;
          v18 = (_QWORD *)(a1 + 80);
          if ( !*((_BYTE *)v3 + 72) )
          {
            v3[5] = (__int64)v18;
            *((_BYTE *)v3 + 72) = 1;
            v3[8] = v16;
            ++*v18;
            *(_QWORD *)(a1 + 72) += v16;
            HalpBuddyAllocatorBltRemove(v3, a1);
            goto LABEL_43;
          }
          v17 = v3[5] == (_QWORD)v18;
LABEL_42:
          if ( !v17 )
            return (unsigned int)-1073741823;
LABEL_43:
          if ( v3 == *v11 )
            return v6;
          while ( 1 )
          {
            v19 = v3[2];
            if ( v19 )
            {
              if ( *(__int64 **)(v19 + 24) == v3 )
                break;
            }
            v3 = (__int64 *)v3[2];
            if ( (__int64 *)v19 == *v11 )
              return v6;
          }
          v3 = *(__int64 **)(v19 + 32);
        }
        if ( *((_BYTE *)v3 + 72) )
        {
          v17 = v3[5] == a1 + 80;
          goto LABEL_42;
        }
        HalpBuddyAllocatorBltRemove(v3, a1);
        v6 = HalpBuddyAllocatorSplitNode(a1, v3);
        if ( (v6 & 0x80000000) != 0 )
          return v6;
        HalpBuddyAllocatorBltAdd((__int64 *)v3[4], a1);
        HalpBuddyAllocatorBltAdd(*v12, a1);
        v3 = *v12;
      }
    }
    if ( !v3[3] )
      break;
LABEL_15:
    if ( v8 > *(_QWORD *)(v3[3] + 48) + *(_QWORD *)(v3[3] + 56) )
    {
      if ( a2 < *(_QWORD *)(v3[4] + 48) )
        goto LABEL_22;
      v3 = (__int64 *)v3[4];
    }
    else
    {
      v3 = (__int64 *)v3[3];
    }
  }
  if ( !*((_BYTE *)v3 + 72) )
  {
    HalpBuddyAllocatorBltRemove(v3, a1);
    v6 = HalpBuddyAllocatorSplitNode(a1, v3);
    if ( (v6 & 0x80000000) != 0 )
      return v6;
    HalpBuddyAllocatorBltAdd((__int64 *)v3[4], a1);
    HalpBuddyAllocatorBltAdd((__int64 *)v3[3], a1);
    goto LABEL_15;
  }
  if ( v3[5] != a1 + 80 )
    return (unsigned int)-1073741823;
  return v6;
}
