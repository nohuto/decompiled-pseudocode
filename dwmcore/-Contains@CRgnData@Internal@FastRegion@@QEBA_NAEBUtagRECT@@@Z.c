char __fastcall FastRegion::Internal::CRgnData::Contains(
        FastRegion::Internal::CRgnData *this,
        const struct tagRECT *a2)
{
  LONG left; // esi
  LONG right; // r10d
  LONG top; // ebx
  LONG bottom; // r8d
  LONG *i; // rcx
  LONG v7; // r11d
  LONG *v8; // r9
  LONG j; // edx
  LONG v10; // eax

  left = a2->left;
  if ( a2->left >= *((_DWORD *)this + 1) )
  {
    right = a2->right;
    if ( right <= *((_DWORD *)this + 2) )
    {
      top = a2->top;
      if ( top >= *((_DWORD *)this + 3) )
      {
        bottom = a2->bottom;
        if ( bottom <= *((_DWORD *)this + 2 * *(int *)this + 1) )
        {
          if ( bottom <= *((_DWORD *)this + 3) )
            return 1;
          for ( i = (LONG *)((char *)this + 20); ; i += 2 )
          {
            v7 = *i;
            if ( top < *i )
            {
              v8 = (LONG *)((char *)i + *(i - 1) - 8);
              for ( j = left; v8 < (LONG *)((char *)i + i[1]) && *v8 <= j; j = v10 )
              {
                v10 = v8[1];
                v8 += 2;
                if ( v10 <= j )
                  v10 = j;
              }
              if ( j < right )
                break;
            }
            if ( bottom <= v7 )
              return 1;
          }
        }
      }
    }
  }
  return 0;
}
