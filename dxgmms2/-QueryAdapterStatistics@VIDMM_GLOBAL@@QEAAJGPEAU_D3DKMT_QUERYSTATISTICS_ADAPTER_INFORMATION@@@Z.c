__int64 __fastcall VIDMM_GLOBAL::QueryAdapterStatistics(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        struct _D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION *a3)
{
  unsigned int v4; // ecx
  __int64 v5; // r11
  unsigned __int64 v7; // rdx

  v4 = *((_DWORD *)this + 1754);
  v5 = a2;
  if ( a2 < v4 )
  {
    *(_DWORD *)a3 = *(_DWORD *)(1616LL * a2 + *((_QWORD *)this + 5028) + 32);
    *((_QWORD *)a3 + 3) = 0LL;
    *((_QWORD *)a3 + 4) = *((_QWORD *)this + 898);
    *((_DWORD *)a3 + 10) = *((_DWORD *)this + 1798);
    *((_DWORD *)a3 + 11) = *((_DWORD *)this + 1799);
    *((_DWORD *)a3 + 12) = *((_DWORD *)this + 1800);
    *((_DWORD *)a3 + 13) = *((_DWORD *)this + 1801);
    *((_DWORD *)a3 + 14) = *((_DWORD *)this + 1802);
    *((_DWORD *)a3 + 17) = *((_DWORD *)this + 1804);
    *((_DWORD *)a3 + 18) = *((_DWORD *)this + 1805);
    *((_DWORD *)a3 + 19) = *((_DWORD *)this + 1806);
    *((_DWORD *)a3 + 20) = *((_DWORD *)this + 1807);
    *((_DWORD *)a3 + 21) = *((_DWORD *)this + 1808);
    *((_DWORD *)a3 + 22) = *((_DWORD *)this + 1809);
    *((_DWORD *)a3 + 23) = *((_DWORD *)this + 1810);
    *((_DWORD *)a3 + 34) = *((_DWORD *)this + 1812);
    *((_DWORD *)a3 + 35) = *((_DWORD *)this + 1813);
    *((_DWORD *)a3 + 36) = *((_DWORD *)this + 1814);
    *((_DWORD *)a3 + 37) = *((_DWORD *)this + 1815);
    *((_QWORD *)a3 + 20) = *((_QWORD *)this + 909);
    *((_DWORD *)a3 + 38) = *((_DWORD *)this + 1816);
    *((_QWORD *)a3 + 22) = *((_QWORD *)this + 911);
    *((_DWORD *)a3 + 42) = *((_DWORD *)this + 1820);
    *((_QWORD *)a3 + 24) = *((_QWORD *)this + 913);
    *((_DWORD *)a3 + 46) = *((_DWORD *)this + 1824);
    *((_QWORD *)a3 + 26) = *((_QWORD *)this + 915);
    *((_DWORD *)a3 + 50) = *((_DWORD *)this + 1828);
    *((_QWORD *)a3 + 28) = *((_QWORD *)this + 917);
    *((_DWORD *)a3 + 54) = *((_DWORD *)this + 1832);
    *((_QWORD *)a3 + 30) = *((_QWORD *)this + 919);
    *((_DWORD *)a3 + 58) = *((_DWORD *)this + 1836);
    *((_QWORD *)a3 + 32) = *((_QWORD *)this + 921);
    *((_DWORD *)a3 + 62) = *((_DWORD *)this + 1840);
    *((_QWORD *)a3 + 34) = *((_QWORD *)this + 923);
    *((_DWORD *)a3 + 66) = *((_DWORD *)this + 1844);
    *((_QWORD *)a3 + 36) = *((_QWORD *)this + 927);
    *((_DWORD *)a3 + 70) = *((_DWORD *)this + 1852);
    *((_QWORD *)a3 + 38) = *((_QWORD *)this + 929);
    *((_DWORD *)a3 + 74) = *((_DWORD *)this + 1856);
    *((_QWORD *)a3 + 40) = *((_QWORD *)this + 931);
    *((_DWORD *)a3 + 78) = *((_DWORD *)this + 1860);
    *((_QWORD *)a3 + 41) = 0LL;
    *((_QWORD *)a3 + 43) = *((_QWORD *)this + 933);
    *((_DWORD *)a3 + 84) = *((_DWORD *)this + 1864);
    *((_QWORD *)a3 + 45) = *((_QWORD *)this + 935);
    *((_DWORD *)a3 + 88) = *((_DWORD *)this + 1868);
    *((_QWORD *)a3 + 47) = *((_QWORD *)this + 937);
    *((_DWORD *)a3 + 92) = *((_DWORD *)this + 1872);
    *((_QWORD *)a3 + 49) = *((_QWORD *)this + 939);
    *((_DWORD *)a3 + 96) = *((_DWORD *)this + 1876);
    *((_QWORD *)a3 + 51) = *((_QWORD *)this + 941);
    *((_DWORD *)a3 + 100) = *((_DWORD *)this + 1880);
    *((_QWORD *)a3 + 53) = *((_QWORD *)this + 943);
    *((_DWORD *)a3 + 104) = *((_DWORD *)this + 1884);
    *((_QWORD *)a3 + 54) = *((_QWORD *)this + 944);
    *((_QWORD *)a3 + 55) = *((_QWORD *)this + 945);
    *((_QWORD *)a3 + 56) = *((_QWORD *)this + 946);
    *((_QWORD *)a3 + 57) = *((_QWORD *)this + 947);
    *((_QWORD *)a3 + 58) = *((_QWORD *)this + 948);
    *((_QWORD *)a3 + 59) = *((_QWORD *)this + 949);
    *((_QWORD *)a3 + 60) = *((_QWORD *)this + 950);
    *((_QWORD *)a3 + 61) = *((_QWORD *)this + 951);
    *((_DWORD *)a3 + 126) = *((_DWORD *)this + 1904);
    *((_DWORD *)a3 + 127) = *((_DWORD *)this + 1905);
    *((_DWORD *)a3 + 128) = *((_DWORD *)this + 1906);
    *((_DWORD *)a3 + 129) = *((_DWORD *)this + 1907);
    *((_DWORD *)a3 + 130) = *((_DWORD *)this + 1908);
    *((_DWORD *)a3 + 131) = *((_DWORD *)this + 1909);
    *((_DWORD *)a3 + 132) = *((_DWORD *)this + 1910);
    *((_QWORD *)a3 + 68) = *((_QWORD *)this + 957);
    *((_DWORD *)a3 + 134) = *((_DWORD *)this + 1912);
    *((_QWORD *)a3 + 70) = *((_QWORD *)this + 959);
    *((_DWORD *)a3 + 138) = *((_DWORD *)this + 1916);
    *((_QWORD *)a3 + 72) = *((_QWORD *)this + 961);
    *((_DWORD *)a3 + 142) = *((_DWORD *)this + 1920);
    *((_QWORD *)a3 + 74) = *((_QWORD *)this + 963);
    *((_DWORD *)a3 + 146) = *((_DWORD *)this + 1924);
    *((_QWORD *)a3 + 76) = *((_QWORD *)this + 965);
    *((_DWORD *)a3 + 150) = *((_DWORD *)this + 1928);
    *((_QWORD *)a3 + 78) = *((_QWORD *)this + 967);
    *((_DWORD *)a3 + 154) = *((_DWORD *)this + 1932);
    *((_QWORD *)a3 + 80) = *((_QWORD *)this + 969);
    *((_DWORD *)a3 + 158) = *((_DWORD *)this + 1936);
    *((_QWORD *)a3 + 82) = *((_QWORD *)this + 971);
    *((_DWORD *)a3 + 162) = *((_DWORD *)this + 1940);
    *((_QWORD *)a3 + 84) = *((_QWORD *)this + 973);
    *((_DWORD *)a3 + 166) = *((_DWORD *)this + 1944);
    *((_QWORD *)a3 + 86) = *((_QWORD *)this + 975);
    *((_DWORD *)a3 + 170) = *((_DWORD *)this + 1948);
    *((_QWORD *)a3 + 88) = *((_QWORD *)this + 977);
    *((_DWORD *)a3 + 174) = *((_DWORD *)this + 1952);
    v7 = *((_QWORD *)a3 + 89) & 0xFFFFFFFFFFFFFFFCuLL | (((*(_BYTE *)(*((_QWORD *)this + 5028) + 1616LL * a2 + 544) & 2) != 0)
                                                       + 1LL);
    *((_QWORD *)a3 + 89) = v7;
    *((_QWORD *)a3 + 89) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(2
                                                                       * *(_BYTE *)(*((_QWORD *)this + 5028)
                                                                                  + 1616 * v5
                                                                                  + 446))) & 4;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(3LL, a2, v4);
    return 3221225485LL;
  }
}
