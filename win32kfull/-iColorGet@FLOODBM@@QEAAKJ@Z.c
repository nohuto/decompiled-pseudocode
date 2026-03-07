__int64 __fastcall FLOODBM::iColorGet(FLOODBM *this, int a2)
{
  unsigned int v3; // eax
  unsigned __int8 *v4; // rdx
  unsigned int v5; // eax

  switch ( *(_DWORD *)this )
  {
    case 1:
      return (*(unsigned __int8 *)(((__int64)a2 >> 3) + *((_QWORD *)this + 3)) >> (7 - (a2 & 7))) & 1;
    case 2:
      v5 = *(unsigned __int8 *)(((__int64)a2 >> 1) + *((_QWORD *)this + 3));
      if ( (a2 & 1) != 0 )
        return v5 & 0xF;
      else
        return v5 >> 4;
    case 3:
      return *(unsigned __int8 *)(*((_QWORD *)this + 3) + a2);
    default:
      switch ( *(_DWORD *)this )
      {
        case 4:
          v3 = *(unsigned __int16 *)(2 * a2 + *((_QWORD *)this + 3));
          break;
        case 5:
          v4 = (unsigned __int8 *)(*((_QWORD *)this + 3) + 3 * a2);
          return *v4 | (*(unsigned __int16 *)(v4 + 1) << 8);
        case 6:
          v3 = *(_DWORD *)(4 * a2 + *((_QWORD *)this + 3));
          break;
        default:
          return 0LL;
      }
      return *((_DWORD *)this + 9) & v3;
  }
}
