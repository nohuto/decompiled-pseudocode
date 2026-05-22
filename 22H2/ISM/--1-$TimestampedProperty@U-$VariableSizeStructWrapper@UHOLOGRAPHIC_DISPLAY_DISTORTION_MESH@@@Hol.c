/*
 * XREFs of ??1?$TimestampedProperty@U?$VariableSizeStructWrapper@UHOLOGRAPHIC_DISPLAY_DISTORTION_MESH@@@Holographic@Internal@Windows@@@Holographic@Internal@Windows@@QEAA@XZ @ 0x180044530
 * Callers:
 *     ??1EyeProperty@HolographicDisplaySnapshot@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800C5AB0 (--1EyeProperty@HolographicDisplaySnapshot@Holographic@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::Holographic::TimestampedProperty<Windows::Internal::Holographic::VariableSizeStructWrapper<HOLOGRAPHIC_DISPLAY_DISTORTION_MESH>>::~TimestampedProperty<Windows::Internal::Holographic::VariableSizeStructWrapper<HOLOGRAPHIC_DISPLAY_DISTORTION_MESH>>(
        char *a1)
{
  std::vector<unsigned char>::_Tidy(a1 + 8);
}
