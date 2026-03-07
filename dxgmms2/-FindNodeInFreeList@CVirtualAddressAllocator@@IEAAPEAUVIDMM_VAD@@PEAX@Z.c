struct _RTL_BALANCED_NODE *__fastcall CVirtualAddressAllocator::FindNodeInFreeList(
        CVirtualAddressAllocator *this,
        unsigned __int64 *a2)
{
  struct _RTL_BALANCED_NODE *k; // r14
  struct _RTL_BALANCED_NODE *j; // rbx
  int v6; // eax
  struct _RTL_BALANCED_NODE *v7; // rax
  unsigned __int64 v8; // r9
  struct _RTL_BALANCED_NODE *v9; // rax
  struct _RTL_BALANCED_NODE *v10; // rcx
  struct _RTL_BALANCED_NODE *v11; // r8
  struct _RTL_BALANCED_NODE *v12; // rdx
  struct _RTL_BALANCED_NODE *v13; // rax
  unsigned __int64 v14; // r8
  struct _RTL_BALANCED_NODE *result; // rax
  struct _RTL_BALANCED_NODE *v16; // rcx
  struct _RTL_BALANCED_NODE *v17; // rax
  struct _RTL_BALANCED_NODE *i; // rcx
  int v19; // eax
  unsigned __int64 v20; // r8
  struct _RTL_BALANCED_NODE *v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r10
  struct _RTL_BALANCED_NODE *v24; // rax
  struct _RTL_BALANCED_NODE *v25; // rcx
  struct _RTL_BALANCED_NODE *v26; // rcx

  k = 0LL;
  if ( *a2 || a2[2] || a2[3] != *((_QWORD *)this + 2) )
  {
    j = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
    if ( j )
    {
      while ( 1 )
      {
        v6 = CompareVadSizeLessOrEqualAvl(a2 + 4, j);
        if ( v6 >= 0 )
        {
          if ( v6 <= 0 )
          {
LABEL_7:
            if ( !j )
              break;
LABEL_11:
            v8 = *a2;
            while ( 1 )
            {
              v9 = j[1].Children[0];
              if ( v8 )
              {
                if ( v8 >= (unsigned __int64)v9 && (struct _RTL_BALANCED_NODE *)a2[1] <= j[1].Children[1] )
                {
                  a2[7] = v8;
                  goto LABEL_25;
                }
              }
              else
              {
                v10 = (struct _RTL_BALANCED_NODE *)a2[3];
                if ( v9 < v10 )
                {
                  v11 = j[1].Children[1];
                  v12 = (struct _RTL_BALANCED_NODE *)a2[2];
                  if ( v11 > v12 )
                  {
                    if ( v9 > v12 )
                      v12 = j[1].Children[0];
                    if ( v11 < v10 )
                      v10 = j[1].Children[1];
                    v13 = (*((_DWORD *)this + 36) & 2) != 0
                        ? (struct _RTL_BALANCED_NODE *)((char *)v10 - a2[4])
                        : (struct _RTL_BALANCED_NODE *)((char *)v12 + a2[5]);
                    v14 = (unsigned __int64)v13 & a2[6];
                    if ( v14 < (unsigned __int64)v10
                      && v14 >= (unsigned __int64)v12
                      && (unsigned __int64)v10 - v14 >= a2[4] )
                    {
                      a2[7] = v14;
LABEL_25:
                      k = j;
                      goto LABEL_26;
                    }
                  }
                }
              }
              v16 = j->Children[1];
              v17 = j;
              if ( v16 )
              {
                j = j->Children[1];
                for ( i = v16->Children[0]; i; i = i->Children[0] )
                  j = i;
              }
              else
              {
                for ( j = (struct _RTL_BALANCED_NODE *)(j->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
                      j;
                      j = (struct _RTL_BALANCED_NODE *)(j->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) )
                {
                  if ( j->Children[0] == v17 )
                    break;
                  v17 = j;
                }
              }
              if ( !j )
                goto LABEL_26;
            }
          }
          j = j->Children[1];
        }
        else
        {
          j = j->Children[0];
        }
        if ( !j )
          goto LABEL_7;
      }
    }
    v7 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
    for ( j = 0LL; v7; v7 = v7->Children[0] )
      j = v7;
    if ( !j )
      goto LABEL_26;
    goto LABEL_11;
  }
  k = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  if ( !k )
    goto LABEL_26;
  while ( 1 )
  {
    v19 = CompareVadSizeGreaterOrEqualAvl(a2 + 4, k);
    if ( v19 >= 0 )
      break;
    k = k->Children[0];
LABEL_43:
    if ( !k )
      goto LABEL_44;
  }
  if ( v19 > 0 )
  {
    k = k->Children[1];
    goto LABEL_43;
  }
LABEL_44:
  if ( k )
  {
    v20 = a2[6];
    while ( 1 )
    {
      v21 = k[1].Children[1];
      v22 = v20 & ((unsigned __int64)k[1].Children[0] + a2[5]);
      if ( v22 < (unsigned __int64)v21 )
      {
        v23 = a2[4];
        if ( (unsigned __int64)v21 - v22 >= v23 )
          break;
      }
      v24 = k->Children[1];
      v25 = k;
      if ( v24 )
      {
        v26 = v24->Children[0];
        for ( k = k->Children[1]; v26; v26 = v26->Children[0] )
          k = v26;
      }
      else
      {
        for ( k = (struct _RTL_BALANCED_NODE *)(k->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
              k;
              k = (struct _RTL_BALANCED_NODE *)(k->ParentValue & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( k->Children[0] == v25 )
            break;
          v25 = k;
        }
      }
      if ( !k )
        goto LABEL_26;
    }
    if ( (*((_DWORD *)this + 36) & 2) != 0 )
      a2[7] = v20 & ((unsigned __int64)v21 - v23);
    else
      a2[7] = v22;
  }
LABEL_26:
  result = k;
  *((_DWORD *)this + 36) ^= 2 * (*((_DWORD *)this + 36) & 1);
  return result;
}
