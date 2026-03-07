_BOOL8 __fastcall PFEOBJ::bFilteredOut(PFEOBJ *this, struct _EFFILTER_INFO *a2)
{
  __int64 v2; // rax
  int v5; // ecx
  _DWORD *v6; // r8
  int v7; // edx
  _BOOL8 result; // rax

  v2 = *(_QWORD *)this;
  v5 = *(_DWORD *)(*(_QWORD *)this + 12LL);
  v6 = *(_DWORD **)(v2 + 32);
  result = (v5 & 2) != 0
        || (v7 = v6[12], (v7 & 0x800000) != 0)
        || (v5 & 8) != 0
        || *((_DWORD *)a2 + 6) && (v7 & 2) != 0
        || *((_DWORD *)a2 + 3) && (v7 & 1) != 0
        || *((_DWORD *)a2 + 4) && (v7 & 1) == 0
        || *(_DWORD *)a2
        && (v5 & 1) == 0
        && (v7 & 2) != 0
        && (*((_DWORD *)a2 + 1) != v6[32] || *((_DWORD *)a2 + 2) != v6[33])
        || *((_DWORD *)a2 + 7) && *((_DWORD *)a2 + 8) && (v7 & 2) != 0
        || (unsigned int)PFEOBJ::bFilterNotEnum(this)
        || *((_DWORD *)a2 + 5) && (*(_DWORD *)(*(_QWORD *)this + 12LL) & 1) == 0
        || (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x44) != 0
        || *((_DWORD *)a2 + 9) != 1 && jMapCharset(*((_BYTE *)a2 + 36), this) != *((_BYTE *)a2 + 36);
  return result;
}
